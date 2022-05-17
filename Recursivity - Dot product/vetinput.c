#include <stdio.h>

int vetinput(char nome1[], char nome2[], float vet1[], float vet2[], int * t1, int * t2)
{
	printf("Name of the 1st file\n");
    scanf("%50s", nome1);
    printf("\nName of the 2nd file\n");
    scanf("%50s", nome2);
    FILE * arq1 = fopen(nome1, "r");
    FILE * arq2 = fopen(nome2, "r");
    
    if(arq1 == NULL)
    {
        printf("ERROR: 1st file not found\n");
        return 1;
    }
    
    if(arq2 == NULL)
    {
        printf("ERROR: 2nd file not found\n");
        return 1;
    }

    fscanf(arq1, "%d", t1);
    fscanf(arq2, "%d", t2);
    
    if(*t1 != *t2)
    {
        printf("Error: arrays have different sizes\n");
        return 1;
    }
    
    for(int i = 0; i < *t1; i++)
    {
        fscanf(arq1, "%f", &vet1[i]);
        fscanf(arq2, "%f", &vet2[i]);
    }
    
    fclose(arq1);
    fclose(arq2);
    return 0;
}
        