/* URI - 3053 */
#include <stdio.h>

void troca(int *, int *);

int main()
{
	int N, i, op,copos[3] = {0};
	char P;
	
	scanf("%i %c", &N, &P);
	*(copos + P - 65) = 1;
	
	for (i = 0; i < N; i++)
	{
		scanf("%i", &op);
		switch(op)
		{
			case 1:
				troca((copos + 0), (copos + 1));
				break;
			case 2:
				troca((copos + 1), (copos + 2));
				break;
			case 3:
				troca((copos + 0), (copos + 2));
				break;
		}
	}
	
	for (i = 0; i < 3; i++)
	{
		if (*(copos + i) == 1)
			printf("%c\n", i + 65);
	}
	
	return 0;
}

void troca(int *a, int *b)
{
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

