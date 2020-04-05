/*URI 2868*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N, n1, n2, res, resReal, dif, i;
	char op;
	
	scanf("%i", &N);
	while (N--)
	{
		scanf("%i %c %i %*c %i", &n1, &op, &n2, &res);
//		printf("%i %c %i = %i\n", n1, op, n2, res);

		switch(op)
		{
			case '+':
				resReal = n1 + n2;
				break;
			case '-':
				resReal = n1 - n2;
				break;
			case 'x':
				resReal = n1 * n2;
				break;
		}
		
		dif = abs(res - resReal);
		
		printf("E");
		for (i = 0; i < dif; i++)
			printf("r");
		printf("ou!\n");
	}
	
	return 0;
} // main
