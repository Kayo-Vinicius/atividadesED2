#include <stdio.h>
#include <math.h>

int main(void) {

	int num1, num2, resultadoA, resultadoB, resultadoC;

	printf("Digite dois numeros: ");
	scanf("%d %d", &num1, &num2);

	//Letra A
	resultadoA = num1 + num2;
	//Letra B
	resultadoB = num1 * pow(num2, 2);
	//Letra C
	resultadoC = pow(num1, 2);

	printf("\nResposta A: %d", resultadoA);
	printf("\nResposta B: %d", resultadoB);
	printf("\nResposta C: %d", resultadoC);
	
  return 0;
}