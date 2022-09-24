#include <stdio.h>

    struct dadosPessoa
    {
        int idade, numCasa;
        char nome[49];
        char rua[29], bairro[29], cidade[29];
    };

int main(void) {

	struct dadosPessoa dPes;

	printf("Informe seus dados");
	printf("\nNome: ");
    fgets(dPes.nome,49,stdin);
	
	printf("Idade: ");
	scanf("%d", &dPes.idade);
	getchar();
	printf("Cidade: ");
	fgets(dPes.cidade,29,stdin);
	
	printf("Bairro: ");
	fgets(dPes.bairro,29,stdin);
	
	printf("Rua: ");
	fgets(dPes.rua,29,stdin);
	
	printf("Nº Casa: ");
	scanf("%d", &dPes.numCasa);

	printf("-----------------Seus dados------------------");
	printf("\nNome: %sIdade: %d\nEndereço:\n Cidade-%s Bairro-%s Rua-%s NºCasa-%d", dPes.nome, dPes.idade, dPes.cidade, dPes.bairro, dPes.rua, dPes.numCasa);
	
  return 0;
}
