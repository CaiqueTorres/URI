/*URI - 1435*/

#include <stdio.h>

void main() {
	int j,i,linha,coluna,N,cont,range;
	while(1) {
		cont=0;
		scanf("%i",&N);
		if (N==0) break;
		if (N>=0 && N<=100) {
			int M[N][N];
			range=N;
			i=(N/2.0)+0.5;
			
			for (j=0;j<i;j++) {
				cont++;
				range--;

				for (linha=cont-1;linha<=range;linha++) {
					if (linha==cont-1 || linha==(range)) {
						for (coluna=cont-1;coluna<=range;coluna++ ) M[linha][coluna]=cont;
					} else {
						for (coluna=cont-1;coluna<=range;coluna++) {
							if (coluna==cont-1 || coluna==(range)) M[linha][coluna]=cont;
						}	
					}		
				}	
			}
		
			for (linha=0;linha<N;linha++) {
				for (coluna=0;coluna<N;coluna++) {
					if (coluna==(N-1)) printf("%3i",M[linha][coluna]);
					else printf("%3i ",M[linha][coluna]);
				}
				printf("\n");
			}
			printf("\n");
		}
	}
}
