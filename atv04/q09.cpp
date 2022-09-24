#include <stdio.h>

int main(void) {

	float matriz[3][3] = {1.5, 6.0, 78.9, 2, 56, 98.3, 3.4, 75.0, 23.9};

	for(int i=0; i<9; i++)
		{
			printf("\nEndereço: %p", matriz + i);
		}
  return 0;
}
