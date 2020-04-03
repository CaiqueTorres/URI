#include <stdio.h>

int josephus(int*, int, int);
void main()
{
	int NC,n,k,person[10001],i,q,j;
	scanf("%i",&NC);
	
	for (j=0;j<NC;j++)
	{
		scanf("%i %i",&n,&k);
		printf("Case %i: ",j+1);
		
		if (k==1)
			printf("%i\n",n);
		else if (n==1)
			printf("1\n");
		else
		{
			for (i=0;i<n;i++)
				person[i]=i+1;
				
			josephus(person,n,k);
		}
		
	}
}

int josephus(int* vector, int n, int k)
{
	static int q=0;
	static int cont=0;
	int i;
	
	for (i=0;i<n;i++)
	{
		if (vector[i]!=0)
		{
			cont++;
			
			if (cont==k)
			{
				cont=0;
				vector[i]=0;
				q++;
			}
		}
	}
	
	if (q!=(n-1))
		q=josephus(vector,n,k);
	
	if (q==(n-1))
		for (i=0;i<n;i++)
			if (vector[i]!=0)
			{
				printf("%i\n",vector[i]);
				q=0;
				cont=0;
			}
	return q;
}

