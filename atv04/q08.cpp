#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float vetor[10] = {1.5, 6.0, 78.9, 2, 56, 98.3, 3.4, 75.0, 23.9, 7.3};

	for(int i=0; i<10; i++)
		{
			printf("\nEndereço: %p", vetor + i);
		}
  return 0;
}
