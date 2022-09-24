#include <stdio.h>

int main(void) {
  int num1, num2, ordemValores;

	printf("Digite dois numeros: ");
	scanf("%d %d", &num1, &num2);

	
    for(int i=num1; i!=num2+ordemValores; i=i+ordemValores){
		if(num1 < num2){
		    ordemValores = 1;
			printf("%d ", i);
	    }
	    else if(num1 > num2){
            ordemValores = -1;
		    printf("%d ", i); 
	    }
	    else if(num1 == num2){
		printf("Valores iguias");
	    }
	}
	
  return 0;
}