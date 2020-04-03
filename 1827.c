#include <stdio.h>

void main() {
	int N,linha,coluna;
	while (scanf("%i",&N)!=EOF) {
		if (N>=5 && N<=101) {
			int M[N][N],range,cont,i,j;
			
			for (linha=0;linha<N;linha++) {
				for (coluna=0;coluna<N;coluna++) {
					if (linha==coluna) M[linha][coluna]=2;
					else if ((linha+coluna)==(N-1)) M[linha][coluna]=3;
					else M[linha][coluna]=0;
				}
			}
			
			i=N/2.0+0.5; // Fórmula mágica ;)
			cont=0;
			range=N;
			for (j=0;j<i;j++) {
				
				for (linha=cont;linha<range;linha++) {
					for (coluna=cont;coluna<range;coluna++) {
						if (linha==N/2 && coluna==N/2) M[linha][coluna]=4;
						else if (linha>=N/3 && linha<(N-N/3) && coluna>=N/3 && coluna<(N-N/3))
							M[linha][coluna]=1;
					}
				}
				cont++;
				range--;
			}
			
			for (linha=0;linha<N;linha++) {
				for (coluna=0;coluna<N;coluna++) {
					printf("%i",M[linha][coluna]);
				} printf("\n");
			}
			printf("\n");
		}
	}
}

