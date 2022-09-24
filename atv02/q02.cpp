#include <stdio.h>
#include <stdlib.h>

int potencia(int base, int expoente)
{
	int resposta = 1;
	int i = 0;

	if(expoente == 0)
	{
		return 1;
	}
	else if(expoente < 0)
	{
		printf("Valor não aceito");
		exit(0);
	}

	while(i < expoente)
	{
		resposta = resposta * base;
		i++;
	}
	return resposta;
}
int main(void) {
	int num1, num2, resultado;

	printf("Digite a base da potencia: ");
	scanf("%d", &num1);
	printf("Digite o expoente da potencia: ");
	scanf("%d", &num2);

	resultado = potencia(num1, num2);

	printf("\n%d elevado a %d é: %d", num1, num2, resultado);

  return 0;
}