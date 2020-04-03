#include <stdio.h>
#include <math.h>

void main() {
	int N,T,i,linha,coluna,div;
	float t;
	while(1) {
		scanf("%i",&N);
		if (N==0) break;
		if (N>=1 && N<=15) {
			int M[N][N];
			T=0;
			
			for (linha=0;linha<N;linha++) {
				if (linha==0) {
					for (coluna=0;coluna<N;coluna++) {
						M[0][coluna]=pow(2,coluna);
					}
				} else {
					for (coluna=0;coluna<N;coluna++) {
						M[linha][coluna]=2*M[linha-1][coluna];
					}
				}
			}
			
			for (linha=0;linha<N;linha++) {
				for (coluna=0;coluna<N;coluna++) {
					if (linha==(N-1) && coluna==(N-1)) {
						while (1) {
							div=M[linha][coluna]/(int)pow(10,T);
							if (div==0) break;
							T++;
						}
					}
				}
			}
					
			for (linha=0;linha<N;linha++) {
				for (coluna=0;coluna<N;coluna++) {
					t=0;
					while(1) {
						div=M[linha][coluna]/(int)pow(10,t);
						if (div==0) break;
						t++;
					}
					
					for (i=0;i<(T-t);i++) printf(" ");
					if (coluna==(N-1)) printf("%i",M[linha][coluna]);
					else printf("%i ",M[linha][coluna]);
				}
				printf("\n");
			}
		}
		printf("\n");
	} 
}

