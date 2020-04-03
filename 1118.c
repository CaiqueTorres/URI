#include <stdio.h>

int main()
{
	int op;
	double nota1,nota2;
	
	do {
		do {
			scanf("%lf",&nota1);
			if (nota1<0 || nota1>10) printf("nota invalida\n");
			else
			{
				do {
					scanf("%lf",&nota2);
					if (nota2<0 || nota2>10) printf("nota invalida\n");
				} while (nota2<0 || nota2>10);
			}
		} while (nota1<0 || nota1>10);
	
		printf("media = %.2f\n",(nota1+nota2)/2.0);
	
		do {
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%i",&op);
		} while (op!=1 && op!=2);
	
	} while (op!=2);
	
	return 0;
}

