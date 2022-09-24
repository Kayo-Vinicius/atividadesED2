#include <stdio.h>

int absoluto(int num)
{
	while(num < 0)
	{
		printf("Digite apenas numeros inteiros");
		scanf("%d", &num);
    }
	return num;
}
int main(void) {
	int valor[5], resultado[5];

	for(int i=0; i<5; i++)
	{
		printf("Digite um numero: ");
		scanf("%d", &valor[i]);
		valor[i] = absoluto(valor[i]);
	}
	
	for(int i=0; i<5; i++)
	{
		printf("\n%dº = %d", i+1, valor[i]);
	}
  return 0;
}