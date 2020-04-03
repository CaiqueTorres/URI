#include <stdio.h>

typedef struct Carros
{
	
	int padrao[25];
	int padrao2[25];
	int correto[25];
	int errado[25];
	
} Carros;

int main()
{
	int N, i, j, k, *p, *q, aux, cont;
	Carros car;
	while ((scanf("%i", &N)) != EOF)
	{
		
		for (p = car.padrao, i = 0; i < N; i++, p++)
			*p = i + 1;
			
		for (p = car.correto, i = 0; i < N; i++, p++)
			scanf("%i", &*p);
		
		for (p = car.errado, i = 0; i < N; i++, p++)
			scanf("%i", &*p);
		
		p = car.padrao2;
		for (i = 0; i < N;)
			for (j = 0; j < N; j++)
				for (k = 0; k < N; k++)
					if (car.errado[j] == car.correto[k])
					{
						*p = car.padrao[k];
						p++;
						i++;
					}
			
		cont = 0;
		for (i = 0; i < N; i++)
			for (j = i; j < N; j++)
				if (car.padrao2[i] > car.padrao2[j])
				{
					aux = car.padrao2[i];
					car.padrao2[i] = car.padrao2[j];
					car.padrao2[j] = aux;
					cont++;
				}
		
		printf("%i\n", cont);
	}

    return 0;
}

