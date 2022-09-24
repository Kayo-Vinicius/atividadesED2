#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    struct dadosAluno
    {
        char nome[49];
        int numMatricula, codDisciplina;
        float notas[2];
	};
    struct dadosAluno dAln[10];

int main(void) {

	struct dadosAluno dAln[10];

	int media = 0;
	float mediaAln[2];

    
	for(int i=0; i<2; i++)
	{
		printf("Nome: ");
		fflush(stdin);
		fgets(dAln[i].nome,49,stdin);
	
		printf("Numero de matricula: ");
		scanf("%d", &dAln[i].numMatricula);
		printf("Codigo da disciplina: ");
		scanf("%d", &dAln[i].codDisciplina);
        getchar();
		printf("Primeira nota: ");
		scanf("%f", &dAln[i].notas[0]);
		printf("Segunda nota: ");
		scanf("%f", &dAln[i].notas[1]);
		getchar();
	}
	
	for(int i=0; i<2; i++)
	{
		mediaAln[i] = ((dAln[i].notas[0] * 1) + (dAln[i].notas[1] * 2)) / (1 + 2);
		printf("\nAluno: %sMedia: %.1f", dAln[i].nome, mediaAln[i]);
	}
	
	return 0;
}
