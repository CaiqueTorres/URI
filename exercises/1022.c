/*URI - 1022*/

#include <stdio.h>

void main()
{ 
	int N,a,b,c,d,den,num,i;
	char op;
	
	scanf("%i",&N);
	while (N--)
	{
		scanf("%d / %d %c %d / %d",&a,&b,&op,&c,&d);
		
		switch(op)
		{
			case '+':
				num=a*d + b*c;
				den=b*d;
				break;
			case '-':
				num=a*d - b*c;
				den=b*d;
				break;
			case '*':
				num=a*c;
				den=b*d;
				break;
			case '/':
				num=a*d;
				den=b*c;
				break;
		}
		
		printf("%i/%i = ",num,den);
		for (i=1000;i>=2;i--)
		{
			if (num%i==0 && den%i==0)
			{
				num/=i;
				den/=i;
			}
		}
		printf("%i/%i\n",num,den);
	}
}
