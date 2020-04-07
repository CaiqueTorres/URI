/*URI - 3040*/
#include <stdio.h>

int main()
{
	int n, a, d, g;
	scanf("%i", &n);
	
	while (n--)
	{
		scanf("%i %i %i", &a, &d, &g);
		if (a >= 200 && a <= 300 && d >= 50 && g >= 150)
			printf("Sim\n");
		else
			printf("Nao\n");
	}
	
	return 0;
}
