#include <stdio.h>

float distancia(float num1, float num2){
	float resposta;
	
	if(num1 > num2){
		resposta = num1 - num2;
	}
	else if(num1 < num2){
		resposta = num2 - num1;
	}
	return resposta;
}

int main(void) {

	float x1, y1, x2, y2, resultado1, resultado2;

	printf("\nDigite dois valores: ");
	scanf("%f %f", &x1, &y1);

	resultado1 = distancia(x1, y1);

	printf("A distancia entre os valores é: %.2f", resultado1);

	printf("\nDigite novamente dois valores: ");
	scanf("%f %f", &x2, &y2);

	resultado2 = distancia(x2, y2);

	printf("A distancia entre os valores é: %.2f", resultado2);
  return 0;
}