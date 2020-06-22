/*URI - 1062*/

#include <stdio.h>

int main()
{
	int i, j, N, q, maior, cont, couches[1000];
	while (1)
	{
		scanf("%i", &N);
		if (N == 0)
			break;
		
		while(1)
		{
			q = 1;
			for(i=0;i<N;i++)
			{
				scanf("%i", &couches[i]);
				if (i == 0 && couches[0] == 0)
					break;
			}
			if (couches[0] == 0)
			{
				printf("\n");
				break;
			}
			
			for (i=0;i<N;i++)
			{
				cont = 0;
				for (j=i;j<N;j++)
				{
					if (couches[j] < couches[i])
					{
						if (cont == 0)
						{
							maior = couches[j];
							cont++;
						}
						else if (couches[j] > maior)
						{
							maior = couches[j];
							cont++;
						}
					}
				}
				
				if (cont != 1 && cont != 0)
					q = 0;
			}
			if (q == 1)
				printf("Yes\n");
			else
				printf("No\n");
		}
	}

	return 0;
}

