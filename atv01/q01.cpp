#include <stdio.h>

int main(void) {
    int numero, decimetros, centimetros, milimetros;

	printf("Digite um valor em metros: ");
	scanf("%d", &numero);

	decimetros = numero * 10;
	centimetros = numero * 100;
	milimetros = numero * 1000;
	
	printf("\n%d metros equivale á %d decimetros", numero, decimetros);
	printf("\n%d metros equivale á %d centimetros", numero, centimetros);
	printf("\n%d metros equivale á %d milimetros", numero, milimetros);
	
  return 0;
}