
#include <stdio.h>
#include <stdlib.h>

    void maiorNum(int vetor[])
    {
		int num;
		int aux;
		int maiorNum = vetor[0];
		int vezesRepetiu = 0;

		printf("Digite o tamanho do vetor: ");
		scanf("%d", &num);

		printf("Digite os valores:\n");
		
		for(int i=0; i<num; i++)
		{
			printf("%dº: ", i+1);
			scanf("%d", &vetor[i]);
		}
			
		for(int i=0; i<num; i++)
		{
			if(vetor[i] > maiorNum)
			{
				maiorNum = vetor[i];
			}
		}

		aux = maiorNum;

		for(int i=0; i<num; i++)
		{
			if(vetor[i] == aux)
			{
				vezesRepetiu++;
			}
		}
        printf("Maior valor: %d\nVezes que repetiu: %d", maiorNum, vezesRepetiu);
	}

int main(void) {

    int vetor[0];

	maiorNum(vetor);
	return 0;
}
