/*URI - 1212*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main () {
	int i,j,tam_a,tam_b,cont,n,anterior,A[15],B[15];
	char at[15],bt[15],c;
	
	do {
		cont=0;
		fflush(stdin);
		scanf("%s %s",&at,&bt);
		
		tam_a=strlen(at);
		tam_b=strlen(bt);
		
		for (i=0;i<15;i++)
			A[i]=B[i]=0;
		
		cont=0;
		anterior=0;
			
		for (i=14,j=tam_a-1;i>=0,j>=0;i--,j--) {
			if (cont==tam_a)
				break;
			else {
				A[i]=at[j]-48;
				cont++;
			}
		}
		
		cont=0;
		anterior=0;
		for (i=14,j=tam_b-1;i>=0,j>=0;i--,j--) {
			if (cont==tam_b)
				break;
			else {
				B[i]=bt[j]-48;
				cont++;
			}
		}
		
		cont=0;
		for (i=14;i>=0;i--) {
			if ((A[i]+B[i])>=10) {
				cont++;
				A[i-1]++;
			}
		}
		
		if (strcmp(at,"0")!=0 || strcmp(bt,"0")!=0) {
			if (cont==0)
				printf("No carry operation.\n");
			else if (cont==1)
				printf("1 carry operation.\n");
			else
				printf("%i carry operations.\n",cont);
		}
	} while (strcmp(at,"0")!=0 || strcmp(bt,"0")!=0);
}
