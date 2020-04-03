#include <stdio.h>

void main() {
	int i,j,N,X,Y,cont;
	long int sum;
	scanf("%d",&N);
	for (i=0;i<N;i++) {
		cont=sum=0;
		scanf("%d%*c%d",&X,&Y);
		/*j=X;
		while (cont<Y) {
			if (j%2!=0) {
				sum+=j;
				cont++;
			}
		}*/
		for (j=X;cont<Y;j++) {
			if (j%2!=0) { //obs: quando for criar a condição para números primos, nunca colocar ...%2==1, mas sim ...%2!=0.
				cont++;
				sum+=j;
			}
		}
		printf("%i\n",sum);
	}
}

