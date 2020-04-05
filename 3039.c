/*URI - 3039*/

#include <stdio.h>

int main()
{
	int amount, i, cars, dools;
	char g;
	
	cars = dools = 0;
	
	scanf("%i", &amount);
	for (i = 0; i < amount; i++)
	{
		scanf("%*s %c", &g);
		if (g == 'M') cars++;
		else dools++;
	}
	
	printf("%i carrinhos\n%i bonecas\n", cars, dools);
	
	return 0;
}
