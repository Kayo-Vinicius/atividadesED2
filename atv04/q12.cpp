#include <stdio.h>
#include <stdlib.h>

void valorInteiro(int num1, int num2, int num3)
    {
		int aux;
		if(num1 == num2 && num2 == 3)
		   return 1;
		
		if(num1 != num2 && num2 != num3 && num1 != num3)
		{
			if(num1 > num3 && num2 > num3 && num2 < num1)//3 2 1
			{
				aux = num1;
				num1 = num3;
				num3 = aux;
				printf("%d %d %d", num1, num2, num3);
		    }
	    	if(num1 > num2 && num2 < num3 && num3 > num1)//2 1 3
		    {
				aux = num1;
				num1 = num2;
				num2 = aux;
				printf("%d %d %d", num1, num2, num3);
		    }
			if(num2 > num3 && num3 > num1 && num1 < num2)//1 3 2
		    {
				aux = num2;
				num2 = num3;
				num3 = aux;
				printf("%d %d %d", num1, num2, num3);
		    }
		    if(num2 > num1 && num1 > num3 && num3 < num2)//2 3 1
			{
				aux = num1;
				num1 = num3;
				
				num3 = num2;
				num2 = aux;
				printf("%d %d %d", num1, num2, num3);
			}
			if(num1 > num3 && num2 < num3 && num1 > num2)//3 1 2
			{
				aux = num3;
				num3 = num1;
				num1 = num2;
				num2 = aux;
				printf("%d %d %d", num1, num2, num3);
			}
			return 0;
		} 
	}
int main(void) {
	int x = 2, y = 3, z = 1;
	
    valorInteiro(x, y, z);

	return 0;
}
