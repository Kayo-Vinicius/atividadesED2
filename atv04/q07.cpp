#include <stdio.h>
#include <stdlib.h>

void somarNum(int num1, int num2)
{
	num1 = num1 + num2;
	printf("A: %d\nB: %d", num1, num2);
}
int main(void) {
    int a = 10, b = 20;

	somarNum(a, b);
	return 0;
}
