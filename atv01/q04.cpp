#include <stdio.h>

int main(void) {
  float preco;

	printf("Digite o valor do produto: ");
	scanf("%f", &preco);
	
	if(preco < 100){
		preco = preco+(preco*0.1);
		printf("Novo valor do produto: %.2f", preco);
	}
	else if(preco >= 100){
		preco = preco+(preco*0.2);
		printf("Novo valor do produto: %.2f", preco);
	}
	
  return 0;
}