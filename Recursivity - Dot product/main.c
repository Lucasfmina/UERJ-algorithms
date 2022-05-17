#include <stdio.h>
#include "vetinput.h"
#include "escalar.h"


int main()
{ 
    float Produto_Escalar, vet1[50], vet2[50];
    int t1, t2, verificar;
    char nome_arquivo1[50], nome_arquivo2[50];
    
    verificar = vetinput(nome_arquivo1, nome_arquivo2, vet1, vet2, &t1, &t2);
    // "Verificar" verifies if the reading
	// process was completed successfully (0 = success, 1 = failure)
    if(verificar == 0)
    {
        Produto_Escalar = escalar(vet1, vet2, t1);
        printf("\nDot Product:\n%f", Produto_Escalar);
    }
}