#include <stdio.h>

void addVetor(int vetor[], int *ponteiro)
{
	int num;

	printf("Digite o tamanho do vetor: ");
	scanf("%d", &num);

	printf("Digite os numeros do vetor:\n");

	for(int i=0; i<num; i++)
		{ 
			printf("\n%dº ", i + 1);
			scanf("%d", &vetor[i]);
			*ponteiro = vetor[i] + 1;
			printf("\n%d", *ponteiro);
		}
}
int main(void) {
    int pont = 0, vetor[0];

	
	addVetor(vetor, &pont);
  return 0;
}
