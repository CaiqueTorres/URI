/*URI - 1120*/

#include <stdio.h>
#include <string.h>

int main()
{
	int N, i, allZero = 0, tam;
	char n, D[102];
	
	do
	{
		scanf("%i %s", &N, D);
		tam = strlen(D);
		if (N == 0 && (tam == 1 && *D == '0'))
			continue;
		
		n = N + 48;
		for (i = 0; i < tam; i++)
		{
			
		}
				
	} while (N != 0 && (tam != 1 && *D != '0'));
	
	return 0;
}

