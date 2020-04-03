#include <stdio.h>

void main() {
	int j,i,linha,coluna,N,cont,range;
	while(1) {
		cont=0;
		scanf("%i",&N);
		if (N==0) break;
		if (N>=0 && N<=100) {
			int M[N][N];
						 
			for (linha=0;linha<N;linha++) {
				for (coluna=0;coluna<N;coluna++) {
					if (linha==coluna) {
						cont=0;
						for (j=coluna;j<N;j++) {
							M[linha][j]=++cont;
						}
						cont=0;
						for (i=linha;i<N;i++) {
							M[i][coluna]=++cont;
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

