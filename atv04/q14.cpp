#include <stdio.h>
#include <stdlib.h>

    void preencherVetor(int *vetor, int num)
    {
        vetor[0] = num;
	for(int i=0; i<5; i++)
		{
			printf("\n%d: %d",i+1 ,*vetor);
		}
    }
int main(void) {
    int vetorA[5], a = 2;

	preencherVetor(vetorA, a);
	
	return 0;
}
