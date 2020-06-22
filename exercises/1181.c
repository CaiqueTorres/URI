/*URI - 1181*/

#include <stdio.h>

void main() {
	const int matriz=12;
	int i,L,linha,coluna;
	double soma=0.0,M[matriz][matriz];
	char T[2];
	
	scanf("%i",&L);
	if (L>=0 && L <matriz) {
		fflush(stdin);
		scanf("%s",&T);
		
		for (linha=0;linha<matriz;linha++) {
			for (coluna=0;coluna<matriz;coluna++) {
				fflush(stdin);
				scanf("%lf",&M[linha][coluna]);
				
				if (linha==L) soma+=M[linha][coluna];
			}
		}
		
		if (T[0]=='S') printf("%.1lf\n",soma);
		else if (T[0]=='M') printf("%.1lf\n",soma/matriz);
	}
}

