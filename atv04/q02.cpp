#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x, y;

	printf("P1: %d\nP2: %d", &x, &y);
	
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
