#include <stdio.h>
#include <stdlib.h>

void maiorValor(int x, int y)
{
	if(x > y)
	{
		printf("\nMaior Valor: %d", x);
		printf("\nMenor Valor: %d", y);
	}
	else if(x < y)
	{
		printf("\nMaior Valor: %d", y);
		printf("\nMenor Valor: %d", x);
	}
}
int main(void) {

	int a = 30, b = 20;

	maiorValor(a, b);
	return 0;
}
