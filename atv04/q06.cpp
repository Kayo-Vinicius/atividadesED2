#include <stdio.h>
#include <stdlib.h>

int somarDobro(int num1, int num2)
{
	int resposta;

	num1 = num1 * 2;
	num2 = num2 * 2;
    printf("Dobro A: %d\nDobro B: %d", num1, num2);
	
	resposta = num1 + num2;
	
	return resposta;
}

int main(void) {
  int a = 10, b = 20, resultado;

 resultado = somarDobro(a, b);
	printf("\nSoma do dobro de A + B: %d", resultado);
 
  return 0;
}
