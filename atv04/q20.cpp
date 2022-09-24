#include <stdio.h>
#include <stdlib.h>
 
int negativos(float *vetor, int num) {  

	int qtdNegativos = 0;

	printf("\nDigite o tamanho do vetor: ");
    scanf("%d", &num);

	printf("\nDigite numeros reais:\n");
	for (int i=0; i<num; i++)
	{
		printf("%dº ", i+1);
        scanf("%f", &vetor[i]);
    }
     
    for (int i=0; i<num; i++)
	{
        if (vetor[i] < 0) 
		{
            qtdNegativos++;
        }
    }
    return qtdNegativos;
}
 
int main()
{
    float vetor[0];
    int tamVetor, resultado;

	resultado = negativos(vetor, tamVetor);
	
    printf("\nQuantidade de numeros de negativos: %d\n", resultado);
 
    return 0;
}
