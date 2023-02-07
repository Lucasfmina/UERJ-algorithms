#include <RtcDS3231.h>
#include <Wire.h> 
#include <TM1637Display.h>

RtcDS3231<TwoWire> Rtc(Wire);
RtcDateTime   dataHora;

#define CLK 3
#define DIO 4
#define SENSOR 13
#define BUZZER 6



TM1637Display tm(CLK, DIO);
const uint8_t graus[] { SEG_A | SEG_B | SEG_F | SEG_G , SEG_A | SEG_D | SEG_E | SEG_F };

// Conectar no SDA e SCL do Arduino

void setup(){
  Serial.begin(115200);
  tm.setBrightness(3);
  tm.clear(); 
  Rtc.Begin();
  Rtc.SetDateTime(RtcDateTime(2023,02,07,10,02,00)); // Acertando data e hora
  pinMode(BUZZER, OUTPUT);
  
  if (!Rtc.GetIsRunning())
    {
        Serial.println("RTC was not actively running, starting now");
        Rtc.SetIsRunning(true);
    }

    
}


void loop(){
  
  RtcTemperature temp = Rtc.GetTemperature();
  dataHora = Rtc.GetDateTime();     
  
  if(digitalRead(SENSOR) == HIGH){ 
    tm.clear();
    tone(BUZZER, 237,500);  

    delay(500);
    tm.showNumberDecEx(dataHora.Hour()*100 + dataHora.Minute(),0b11100000,false,4,0);
  }
  noTone(BUZZER);
  delay(500);
}