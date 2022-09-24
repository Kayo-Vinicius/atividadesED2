#include <stdio.h>
#include <stdlib.h>

    void retornarNum(float num, int *parteInteira, float *parteFracionaria)
    {
		*parteInteira = (int)num;
		*parteFracionaria = num - *parteInteira;
    }

int main(void) {
    float numero, fracionario;
    int inteiro;

	printf("Digite um numero real: ");
	scanf("%f", &numero);
	
	retornarNum(numero, &inteiro, &fracionario);

	printf("\nParte interira: %d\nParte fracionaria: %f", inteiro, fracionario);
	return 0;
}
