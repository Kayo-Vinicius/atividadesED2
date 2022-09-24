#include <stdio.h>

    struct dadosFuncionario
    {
        char nome[49], sexo, codSetor[10], cargo[30], CPF[20];
        int idade;
        float salario;
        int dia, mes, ano;
	};
    struct dadosFuncionario dFunc;

int main(void) {
    struct dadosFuncionario dFunc;

	printf("Nome: ");
	fgets(dFunc.nome,49,stdin);
	printf("Idade: ");
	scanf("%d", &dFunc.idade);
	printf("Sexo: M ou F?");
	scanf("%c", &dFunc.sexo);
	getchar();
	printf("CPF: ");
	fgets(dFunc.CPF,20,stdin);
	getchar();
	printf("Data de nascimento: ");
    scanf("%d %d %d", &dFunc.dia, &dFunc.mes, &dFunc.ano);
	getchar();
    printf("Codigo do setor: ");
	fgets(dFunc.codSetor,10,stdin);
	getchar();
	printf("Cargo: ");
	fgets(dFunc.cargo,30,stdin);
	getchar();
	printf("Salario: ");
	scanf("%f", &dFunc.salario);

	printf("Nome: %s", dFunc.nome);
	printf("Idade: %d", dFunc.idade);
	printf("Sexo: %c", dFunc.sexo);
	printf("CPF: %s", dFunc.CPF);
	printf("Data de nascimento: %02d/%02d/%d", dFunc.dia, dFunc.mes, dFunc.ano);
	printf("Codigo do setor: %s", dFunc.codSetor);
	printf("Cargo: %s", dFunc.cargo);
	printf("Salario: %f", dFunc.salario);
	
  return 0;
}
