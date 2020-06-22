/*URI - 2867*/

#include <stdio.h>
#include <math.h>

int main()
{
	int N, i, a, b;
	scanf("%i", &N);
	
	for (i = 0; i < N; i++)
	{
		scanf("%i %i", &a, &b);
		printf("%i\n", 1 + (int)(b * log10(a)));
	}
	
	return 0;
}
