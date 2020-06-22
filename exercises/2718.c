/* URI - 2718 */
#include <stdio.h>

int main()
{
	int N, i;
	long long numero, temp, contador, maior;

	scanf("%i", &N);
	while (N--)
	{
		scanf("%lli", &numero);
		contador = maior = 0;
		while (numero > 0)
		{
			temp = numero % 2;
			numero /= 2;
			
			if (temp == 1) 
				contador++;
			else
			{
				if (contador > maior)
				{
					maior = contador;
					contador = 0;
				}
				contador = 0;
			}
		}
		if (contador > maior)
		{
			maior = contador;
			contador = 0;
		}
		printf("%lli\n", maior);
	}
		
	return 0;
}

