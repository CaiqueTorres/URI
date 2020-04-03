#include <stdio.h>
#include <stdint.h>

void main() {
	int i,N,menor,pos_menor;
	
	scanf("%i",&N);
	if (N>1 && N<1000) {
		int X[N];
		for (i=0;i<N;i++) scanf("%i",&X[i]);
		for (i=0;i<N;i++) {
			if (i==0) {
				menor=X[i];
				pos_menor=i;
			} else {
				if (X[i]<menor) {
					menor=X[i];
					pos_menor=i;
				}
			}
		}
		printf("Menor valor: %i\nPosicao: %i\n",menor,pos_menor);
		
	}
}
