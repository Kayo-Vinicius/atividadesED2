#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    void calcularEsfera(float raio, float *area, float *volume)
    {
        float pi = 3.14;
		int resto;
		
		*area = 4 * pi * (pow(raio, 2));
		*volume = (4 * pi * (pow(raio, 3)))/3;
	}

int main(void) {
    float raioEsfera, areaEsfera, volumeEsfera;
	
	printf("Digite o raio da esfera: ");
	scanf("%f", &raioEsfera);
	
	calcularEsfera(raioEsfera, &areaEsfera, &volumeEsfera);
	printf("\nArea da esfera: %.2f\nVolume da esfera: %.2f", areaEsfera, volumeEsfera);

	return 0;
}
