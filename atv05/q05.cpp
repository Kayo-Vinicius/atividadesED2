#include <stdio.h>

    struct vetor
    {
        float x, y ,z;
	};
    struct vetor vet[2];

int main(void){

	struct vetor vet[2];
	float somaVetor, aux;

	for(int i=0; i<2; i++)
	{
		printf("Digite o valor de x: ");
		scanf("%f", &vet[i].x);

		printf("Digite o valor de y: ");
		scanf("%f", &vet[i].y);

		printf("Digite o valor de z: ");
		scanf("%f", &vet[i].z);
		printf("\n");
	}

	somaVetor = vet[0].x + vet[1].x;
	aux = somaVetor + vet[0].y + vet[1].y;
	somaVetor = aux + vet[0].z + vet[1].z;

	printf("Soma dos vetores: %f", somaVetor);
	return 0;
}
