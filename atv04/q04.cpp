#include <stdio.h>
#include <stdlib.h>

void inverteValor(int x, int y)
{
	x = x + y;
	y = x - y;
	x = x - y;

	printf("%d %d", x, y);
}
int main(void) {

	int A = 10, B = 20;

	inverteValor(A, B);
	
	return 0;
}
