/*URI - 2770*/

#include <stdio.h>

int main()
{
	int X, Y, xi, yi, area;
	long long M, i;
	
	while (scanf("%i %i %lli", &X, &Y, &M) != EOF)
	{
		area = X * Y;
		for (i = 0; i < M; i++)
		{
			scanf("%i %i", &xi, &yi);
			if (xi <= X && yi <= Y || xi <= Y && yi <= X)
				printf("Sim\n");
			else
				printf("Nao\n");
		}
	}	 
	return 0;
}
