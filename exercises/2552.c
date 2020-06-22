#include <stdio.h>

void main() {
	int N,M,l,c,cont;
	while (scanf("%d %d",&N,&M)!=EOF) {
		int matrix[N][M][2];
		
		for (l=0;l<N;l++) for (c=0;c<M;c++) scanf("%d",&matrix[l][c][0]);		
		for (l=0;l<N;l++) {
			for (c=0;c<M;c++) {
				cont=0;
				if (matrix[l][c][0]==1) matrix[l][c][1]=9;
				else {
					if (l-1>=0 && matrix[l-1][c][0]==1) cont++;
					if (l+1<N && matrix[l+1][c][0]==1) cont++;
					if (c-1>=0 && matrix[l][c-1][0]==1) cont++;
					if (c+1<M && matrix[l][c+1][0]==1) cont++;
					matrix[l][c][1]=cont;
				}
			}
		}
		for (l=0;l<N;l++) {
			for (c=0;c<M;c++) {
				printf("%d",matrix[l][c][1]);
			}
			printf("\n");
		}
	}
}

