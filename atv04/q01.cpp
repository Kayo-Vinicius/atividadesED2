#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int idade = 18;
	float altura = 1.76;
	char letra = 'k';

	int x = 10;
	float y = 1.50;
	char z = 'w';
    
	printf(" Letra: %c\n Idade: %d\n Altura: %f\n", letra, idade, altura);

	int *ponteiro1;
	float *ponteiro2;
	char *ponteiro3;

	ponteiro1 = &idade;
	ponteiro2 = &altura;
	ponteiro3 = &letra;

	*ponteiro1 = x;
	*ponteiro2 = y;
	*ponteiro3 = z;

	printf(" \n Letra: %c\n Idade: %d\n Altura: %f\n", letra, idade, altura);
  return 0;
}
