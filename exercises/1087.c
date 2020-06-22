/*URI - 1087*/

#include <stdio.h>
 
int main() {
 
    int X1,Y1,X2,Y2;
	int qtd;

	do
	{
		scanf("%i %i %i %i",&X1,&Y1,&X2,&Y2);
		
		if (abs(X1-X2)==abs(Y1-Y2) && (X1-X2)!=0) qtd=1;
		else
		{
			if (abs(X1-X2)>0)
			{
				if (abs(Y1-Y2)>0) qtd=2;
				else qtd=1;
			}	
		
			if (abs(Y1-Y2)>0)
			{
				if (abs(X1-X2)>0) qtd=2;
				else qtd=1;
			}
			
			if (abs(X1-X2)==(abs(Y1-Y2))) qtd=0;
		}
		
		if (X1!=0 && Y1!=0 && X2!=0 && Y2!=0)
			printf("%i\n",qtd);
			
	} while (X1!=0 || Y1!=0 || X2!=0 || Y2!=0);	
 
    return 0;
}
