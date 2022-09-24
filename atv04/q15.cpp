#include <stdio.h>
#include <stdlib.h>

 void imprimirVetor(int *vetor, int tamanho)
    {
	for(int i=0; i<tamanho; i++)
		{
			printf("\n%d: %d",i+1 ,*(vetor + i));
		}
    }
int main(void) {
    int vetorA[5] = {10, 20, 30, 40, 50}, a = 5;

	imprimirVetor(vetorA, a);
  return 0;
}
