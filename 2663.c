#include <stdio.h>
#include <string.h>
	
void main() {
	int i,K,k,N,menor,maior,pos_maior,pos;
	
	scanf("%i %i",&N,&K);
	int P[N],C[N];
	
	for (i=0;i<N;i++) {
		scanf("%i",&P[i]);
		if (i==0) menor=P[i];
		else if (P[i]<menor) menor=P[i];
	}
	
	for (i=0;i<N;i++) C[i]=-1;
	
	maior=i=pos=0;
	for (k=0;k<N;k++) {
		for (i=0;i<N;i++) {
			if (i==0) {
				maior=P[i];
				pos_maior=i;
			}
			else if (P[i]>=maior) {
				maior=P[i];
				pos_maior=i;
			}
		}
		
		C[pos]=maior;
		P[pos_maior]=menor-1;
		pos++;
	}
	int ultimo,cont=0;
	for (i=0;i<N;i++) {
		if (i<K) {
			ultimo=C[i];
			cont++;
		} else if (i==K && C[i]==ultimo) {
			ultimo=C[i];
			cont++;
			i--;
		}
	}
	
	for (i=0;i<N;i++) printf("%i\n",C[i]);
	printf("\n%i\n",cont);
}

