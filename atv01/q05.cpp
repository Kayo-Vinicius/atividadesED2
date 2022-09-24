#include <stdio.h>

int main(void) {
  float nota1, nota2, mediaNota;
	
	while(nota1 != 50){
		printf("\nDigite as duas notas do aluno: ");
	    scanf("%f %f", &nota1, &nota2);

		if(nota1 == 50){
			printf("Nota não suportada fechando o progama...");
		}
		else{
	        mediaNota = (nota1 + nota2)/2;
        
		    printf("\nMedia do aluno: %.1f", mediaNota);
		}
	}
  return 0;
}