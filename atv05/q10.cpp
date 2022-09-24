#include <stdio.h>
#include <string.h>

    struct dadosPessoa
    {
        char nome[30];
        int tel, numCasa;
        char rua[20], bairro[30], cidade[30];
	};
    struct dadosPessoa dPes[5];

int main(void) {
    struct dadosPessoa dPes[5];
    int ordemAlf;
	char aux[30];
	
	for(int i=0; i<5; i++)
	{
		printf("Nome: ");
	    fgets(dPes[i].nome,30,stdin);
		printf("Telefone: ");
	    scanf("%d", &dPes[i].tel);
		printf("Nº da Casa: ");
	    scanf("%d", &dPes[i].numCasa);
		printf("Rua: ");
		getchar();
		fgets(dPes[i].rua,20,stdin);
		printf("Bairro: ");
		fgets(dPes[i].bairro,30,stdin);
		printf("Cidade: ");
		fgets(dPes[i].cidade,30,stdin);
		printf("\n");
	}

	for(int i=0; i<5; i++)
	{
		for(int j=i+1; j<5; j++)
		{
			ordemAlf = strcmp(dPes[i].nome, dPes[j].nome);
			if(ordemAlf > 0)
			{
				strcpy(aux, dPes[i].nome);
				strcpy(dPes[i].nome, dPes[j].nome);
				strcpy(dPes[j].nome, aux);
			}
		}
	}

	for(int i=0; i<5; i++)
	{
		printf("Nome: %s\n", dPes[i].nome);
		printf("Telefone: %d\n", dPes[i].tel);
		printf("Endereço: NºCasa- %d\nRua-%s\nBairro-%s\nCidade-%s", dPes[i].numCasa, dPes[i].rua, dPes[i].bairro, dPes[i].cidade);
		
	}
  return 0;
}
