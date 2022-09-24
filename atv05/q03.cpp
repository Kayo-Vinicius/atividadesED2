#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    struct dadosAluno
    {
        char nome[49];
        int numMatricula;
        char curso[29];
	};

    struct dadosAluno dAln[5];
int main(void) {
	
    struct dadosAluno dAln[5];
    
	for(int i=0; i<5; i++)
	{
		printf("Nome: ");
		fflush(stdin);
		fgets(dAln[i].nome,49,stdin);
	

		printf("Numero de matricula: ");
		scanf("%d", &dAln[i].numMatricula);
        getchar();
		printf("Curso: ");
		fgets(dAln[i].curso,29,stdin);
	}

	for(int i=0; i<5; i++)
	{
		printf("Nome: %s", dAln[i].nome);
		printf("Numero de matricula: %d", dAln[i].numMatricula);
		printf("Curso: %s", dAln[i].curso);
	}
	return 0;
}
