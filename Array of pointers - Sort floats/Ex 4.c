#include<stdio.h>
#include<stdlib.h>

int main(){
    
    //reading
    int N;
    float aux;
    printf("How many numbers to sort?\n");
    scanf("%d", &N);
    printf("\n");
    float * p = (float*)malloc(sizeof(float)*N);
    for(int i = 0; i != N; i++)
	{
        scanf("%f", (p+i));
    }
    
    
    //sorting
    for(int i = 0; i != N ; i++)
	{
        for(int j = 0; j != N ; j++)
		{
            if(*(p+i) > *(p+j))
			{
                aux = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = aux;
            }
        }
    }
    
    //print
    for(int i = 0; i != N; i++)
	{
        printf("%g\t", *(p+i) );
    }

	//releasing
    free(p);
    
    return 0;
}