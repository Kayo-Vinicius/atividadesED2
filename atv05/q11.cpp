#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    struct dadosAluno
    {
        char nome[49];
        int numMatricula;
        float mediaFinal[2];
	};
    struct dadosAluno dAln[5];

int main(void) {

	struct dadosAluno dAln[10], aprovados[10], reprovados[10];;
	float notas[3];
	

    
	for(int i=0; i<2; i++)
	{
		printf("Nome: ");
		fflush(stdin);
		fgets(dAln[i].nome,49,stdin);
	
		printf("Numero de matricula: ");
		scanf("%d", &dAln[i].numMatricula);
        getchar();
		printf("Primeira nota: ");
		scanf("%f", &notas[0]);
		printf("Segunda nota: ");
		scanf("%f", &notas[1]);
		printf("Terceira nota: ");
		scanf("%f", &notas[2]);
		printf("\n");
		getchar();
	}
	
	for(int i=0; i<2; i++)
	{
		dAln[i].mediaFinal[i] = (notas[0] + notas[1] + notas[2]) / 3;
	}
	    for(int i=0; i<2; i++)
		{
			if(dAln[i].mediaFinal[i] < 5)
			{
				reprovados[i] = dAln[i];
		        printf("\nAluno %s reprovado", reprovados[i].nome);
            }
		    else if(dAln[i].mediaFinal[i] >= 5)
		    {
				aprovados[i] = dAln[i];
                printf("\nAluno %s aprovado", aprovados[i].nome);
            }
        }
	
	return 0;
}
