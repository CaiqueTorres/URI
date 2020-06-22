/*URI - 1117*/

#include <stdio.h>

int main()
{
	float nota1,nota2;
	
	do {
		scanf("%f",&nota1);
		if (nota1<0 || nota1>10) printf("nota invalida\n");
		
		else
		{
			do {
				scanf("%f",&nota2);
				if (nota2<0 || nota2>10) printf("nota invalida\n");
			} while (nota2<0 || nota2>10);
		} 
	} while (nota1<0 || nota2>10);
	
	printf("media = %.2f\n",(nota1+nota2)/2);
	return 0;
}

