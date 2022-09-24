#include <stdio.h>

int main(void) {
    int vetor[5];

	for(int i=0; i<5;i++)
		{
			printf("\nDigite um numero: ");
			scanf("%d", &vetor[i]);
			printf("%d", vetor[i] * 2);
		}
	
  return 0;
}
