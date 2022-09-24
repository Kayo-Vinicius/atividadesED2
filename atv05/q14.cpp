#include <stdio.h>

    struct carro
    {
        char marca[15];
        int ano;
        float preco;
	};
    struct carro car[5];

int main(void) {
    struct carro car[5];
	float p;

	for(int i=0; i<5; i++)
	{
        printf("marca do carro: ");
        fgets(car[i].marca,15,stdin);
		
        printf("Ano: ");
        scanf("%d", &car[i].ano);
        
        printf("Preço: ");
        scanf("%f", &car[i].preco);
		getchar();
    }

	for(int i=0; i<5; i++)
	{
        printf("Carros com preço abaixo de: ");
        scanf("%f", &p);

        if(p==0)
	    {
            return 0;
        }

    int valor = 0;
        for(int i=0; i<5; i++)
		{
            if(car[i].preco < p)
			{
                printf("\nMarca: %s\tAno: %d\tPreco: %.3f\n", car[i].marca, car[i].ano, car[i].preco);
                valor = 1;
            }
        }
		
        if(valor == 0)
		{
			printf("\nNão encontrado carros com esse valor.\n");
		}
    }

  return 0;
}
