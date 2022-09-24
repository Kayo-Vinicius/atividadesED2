#include <stdio.h>

int main(void) {
    int vetor[5];

	for(int i=0; i<5;i++)
		{
			printf("\nDigite um numero: ");
			scanf("%d", &vetor[i]);

			if(vetor[i] %2==0)
			{
				printf("%p", vetor);
			}
		}
	return 0;
}
