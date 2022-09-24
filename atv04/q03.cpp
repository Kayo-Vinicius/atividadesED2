#include <stdio.h>

int main(void) {

	int x, y;

	printf("Digite um dois numros: ");
	scanf("%d %d", &x, &y);

	if(&x < &y)
	{
		printf("\nP2: %d", &y);
	}
	else if(&x > &y)
	{
		printf("\nP1: %d", &x);
	}
	return 0;
}
