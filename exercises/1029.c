/*URI - 1029*/

#include <stdio.h>

void call(int);

int soma=0;

void main()
{
	int N,i;
	long int X,fib[39];
	
	fib[0]=0;
	fib[1]=1;
	
	scanf("%i",&N);
	while (N--)
	{
		scanf("%i",&X);
		
		printf("fib(%i) = ",X);
		
		call(X);
		printf("%i calls = " ,soma);
		soma=0;
		
		if (X!=0 && X!=1)
		{
			for (i=2;i<X+1;i++)
				fib[i]=fib[i-1]+fib[i-2];
			printf("%i\n",fib[X]);
		}
		else if (X==0)
			printf("%i\n",0);
		else if (X==1)
			printf("%i\n",1);
	}
}
void call(int x)
{
	int a,b,c;
	
	if (x!=1 && x!=0)
	{
		a=x-1;
		b=x-2;
		
		soma+=2;
		
		if (a!=1 && a!=0)
			call(a);
			
		if (b!=1 && b!=0)
			call(b);
	}
}
