#include <stdio.h>

int findAmount(int [][1001], int, int, int, int);

int main()
{
	printf("ola\n");
	char op;
	int x1, y1, X, Y, Z, W, amount, x, y, p, n, i, j, vec[1001][1001];
	
//	for (i = 0; i < 1001; i++)
//		for (j = 0; j < 1001; j++)
//			*(*(vec + i) + j) = 0;
	
//	do
//	{
//		scanf("%i %i %i", &x, &y, &p);
//		if (x == 0 && y == 0 && p == 0)
//			continue;
//			
//		scanf("%i", &n);
//		for (i = 0; i < n; i++)
//		{
//			scanf("%c", &op);
//			if (op == 'A')
//			{
//				scanf("%i %i %i", &amount, &x1, &y1);
//				*(*(vec + x1) + y1) = amount;
//			}
//			else
//			{
//				scanf("%i %i %i %i", &X, &Y, &Z, &W);
//				printf("%i\n", findAmount(vec, X, Y, Z, W));
//			}
//		}
//		
//	} while (x != 0 || y != 0 || p != 0);
	
	return 0;
}


int findAmount(int vec[][1001], int x1, int y1, int x2, int y2)
{
	int cont = 0, i, j;
	for (i = x1; i < x1; i++)	
	{
		for (j = y1; j < y2; j++)
		{
			if (*(*(vec + i) + j) != 0)
				cont++;
		}
	}
	return cont;
}

