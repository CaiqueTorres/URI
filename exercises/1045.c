/*URI - 1045*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double A,B,C,aux;
	
	scanf("%lf%lf%lf",&A,&B,&C);
	
	if (A>0 && B>0 && C>0)
	{
		if (B>A && B>C)
		{
			if (A>C)
			{
				aux=A;
				A=B;
				B=aux;
			}
			else
			{
				aux=A;
				A=B;
				B=aux;
			
				aux=C;
				C=B;
				B=aux;
			}
		}
		else if(C>A && C>B)
		{
			if (A>B)
			{
				aux=A;
				A=C;
				C=aux;
			
				aux=B;
				B=C;
				C=aux;
			}
			else
			{
				aux=A;
				A=C;
				C=aux;
			}
		}
		else if (A>B && A>C)
		{
			if (C>B)
			{
				aux=B;
				B=C;
				C=aux;
			}
		}
	
		if (A>=B+C) printf("NAO FORMA TRIANGULO\n");
		else if (pow(A,2)==pow(B,2) + pow(C,2)) printf("TRIANGULO RETANGULO\n");
		else if (pow(A,2)>pow(B,2) + pow(C,2)) printf("TRIANGULO OBTUSANGULO\n");
		else if (pow(A,2)<pow(B,2) + pow(C,2)) printf("TRIANGULO ACUTANGULO\n");
		
		if (A==B && B==C) printf("TRIANGULO EQUILATERO\n");
		else if (A==B && B!=C || A==C && C!=B || B==C && C!=A) printf("TRIANGULO ISOSCELES\n");
		
	}
	
	system("PAUSE");
	return 0;
}
