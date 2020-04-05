/*URI 2922*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, q;
	while ((scanf("%i %i", &n, &q)) != EOF)
	{
		if (n == q)
		{
			printf("0\n");
		}
		else
		{
			printf("%i\n", abs(n - q) - 1);
		}
	}
	
	return 0;
} // main
