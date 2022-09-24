#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int A, *B, **C, ***D;
	A = 5;
	
    B = &A;
	C = &B;
	D = &C;
		
	printf("\nO dobro de %d: %d", A, *B * 2);
	printf("\nO triplo de %d: %d", A, **C * 3);
	printf("\nO quadruplo de %d: %d", A, ***D * 4);
    
    return 0;
}
