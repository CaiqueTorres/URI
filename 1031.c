#include <stdio.h>

int compare(int*, int);
int search(int*, int, int);
int main()
{
	int N, cities[100], i, m;
	do {
		scanf("%i",&N);
		if (N != 0)
		{
			if (N == 13)
				printf("1\n");
			else
			{
				for (i=0;i<N;i++)
					cities[i] = i+1;
				
				m = compare(cities, N);
				printf("%i\n", m);
			}
		}
	} while (N != 0);
	
	return 0;
}

int compare(int* vector, int tam)
{
	int last_city, i, m = 2, vector2[100];
	
	do {
		for (i=0;i<tam;i++)
			vector2[i] = vector[i];
		
		last_city = search(vector2, tam, m);
		m++;
	} while (last_city != 13);
	return m - 1;
}

int search(int* vector, int tam, int k)
{
	static int cont = 0, n;
	int i, x = 0; // variável x indica a quantidade de números que ainda não foram substituidos
	
	for (i=0;i<tam;i++)
	{
		if (i == 0 && vector[i] != 0)
			vector[i] = 0;
		else if (vector[i] != 0)
			cont++;
		
		if (cont == k)
		{
			cont = 0;
			vector[i] = 0;
		}
	}
	
	for (i=0;i<tam;i++)
		if (vector[i] != 0)
			x++;
	
	if (x != 1)
		search(vector, tam, k);
	else
		for (i=0;i<tam;i++)
			if (vector[i] != 0)
			{
				n = vector[i];
				cont = 0;
			}
	return n;
}

