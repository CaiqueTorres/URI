#include <stdio.h>
#include <string.h>

void diamond(char*, int);
int main()
{
	int x, N;
	char sand[1000];
	
	scanf("%i", &N);
	while (N--)
	{
		fflush(stdin);
		scanf("%s", &sand);
		
		x = strlen(sand);
		diamond(sand, x);
	}
	
	return 0;
}

void diamond(char* sand, int tam)
{
	static int diam = 0;
	int i, pos, cont = 0, q = 0;
	for (i=0;i<tam;i++)
	{
		if (sand[i] == '<')
		{
			q = 1;
			pos = i;
		}
		if (q == 1 && sand[i] == '>')
		{
			cont++;
			sand[i] = sand[pos] = '.';
			q = 0;
		}
	}
	
	diam += cont;
	
	if (cont == 0)
	{
		printf("%i\n", diam);
		diam = 0;
	}
	else
		diamond(sand, tam);
}

