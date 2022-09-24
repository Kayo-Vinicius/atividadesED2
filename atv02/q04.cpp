#include <stdio.h>
#include <math.h>

int verificaPositivo(int num)
{
	while(num < 0)
	{
		printf("Digite apenas numeros inteiros");
		scanf("%d", &num);
    }
	return num;
}

int somaDivisor(int num){
	int resposta=0;

		for(int i=1; i<num; i++)
		{
			if(num %i==0)
			{
				resposta = resposta + i;
			}
		}
        return resposta;
}
int main(void) {
	int valor[5], resultado[5];
    
	for(int i=0; i<5; i++){
		printf("Digite um numero: ");
		scanf("%d", &valor[i]);
		valor[i] = verificaPositivo(valor[i]);
	}

	for(int i=0; i<5; i++){
		resultado[i] = somaDivisor(valor[i]);
	}

	for(int i=0; i<5; i++){
		printf("\n%d = %d", valor[i], resultado[i]);
	}
  return 0;
}