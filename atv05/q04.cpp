#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    struct dadosAluno
    {
        char nome[49];
        int numMatricula;
        float notas[3];
	};
    struct dadosAluno dAln[5];

int main(void) {

	struct dadosAluno dAln[5];
	int maiorNota1, maiorMediaAln, menorMediaAln;
	float maiorNota = 0, maiorMedia = 0, menorMedia = 0, mediaAln[2];

    
	for(int i=0; i<2; i++)
	{
		printf("Nome: ");
		fgets(dAln[i].nome,49,stdin);
	
		printf("Numero de matricula: ");
		scanf("%d", &dAln[i].numMatricula);
        getchar();
		printf("Primeira nota: ");
		scanf("%f", &dAln[i].notas[0]);
		printf("Segunda nota: ");
		scanf("%f", &dAln[i].notas[1]);
		printf("Terceira nota: ");
		scanf("%f", &dAln[i].notas[2]);
		printf("\n");
		getchar();
	}
	
	for(int i=0; i<2; i++)
	{
		mediaAln[i] = (dAln[i].notas[0] + dAln[i].notas[1] + dAln[i].notas[2]) / 3;
		
		if(dAln[i].notas[0] > maiorNota)
		{
			maiorNota = dAln[i].notas[0];
			maiorNota1 = i;
		}

		if(mediaAln[i] > maiorMedia)
		{
			maiorMedia = mediaAln[i];
			maiorMediaAln = i;
		}
		
        if(mediaAln[i] < menorMedia)
		{
			menorMedia = mediaAln[i];
			menorMediaAln = i;
		}
	
	}
	    for(int i=0; i<2; i++)
		{
			if(mediaAln[i] < 6)
			{
				printf("\nAluno %s reprovado", dAln[i].nome);
            }
		    else if(mediaAln[i] >= 6)
		    {
                printf("\nAluno %s aprovado", dAln[i].nome);
            }
        }
	
	printf("Aluno com maior primeira nota: %s", dAln[maiorNota1].nome);
	printf("Aluno com maior media: %s", dAln[maiorMediaAln].nome);
	printf("Aluno com menor media: %s", dAln[menorMediaAln].nome);
	
	return 0;
}
