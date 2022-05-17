#include <stdio.h>
#include "floodfill.h"

int main()
{

    FILE* arq;
    int x0, y0, x = 0, y = 0;
    char c, str_aux[51], Entrada[20][20], saida[20][20];
    printf("File name:\n");
    scanf("%50s", str_aux );
    printf("\n");
    arq = fopen(str_aux, "r");
    
    if(arq != NULL)
    {
        while((c = fgetc(arq)) != EOF && x < 20)
        {
            if(c != '\n')
            {
                Entrada[x][y] = c;
                y++;
            }
            else
            {
                if(x == 19)
                {
                    break;
                }
                x++;
                y = 0;
            }
        }
        fscanf(arq, "%d %d", &x0, &y0);
        floodfill(Entrada, x0, y0);
    
    
         for(int i = 0; i < 20; i++)
         {
             for(int j = 0; j < 20; j++)
             {
                 printf("%c", Entrada[i][j]);
                 if(j == 19)
                 {
                     printf("%c", '\n');
                 }
             }
        }
        fclose(arq);
    }
    else
    {
        printf("ERROR: file not found");
    }
}