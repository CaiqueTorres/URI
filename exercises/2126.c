#include <stdio.h>
#include <string.h>
	
void main() {
	int i,j,k,q,cont,tam_n,tam_N,pos,caso=0;
	char n[11],N[33];
	
	while (scanf("%s%s",&n,&N)!=EOF) {
		caso++;
		
		tam_n=strlen(n);
		tam_N=strlen(N);
		
		cont=0;
		for (i=0;i<tam_N;i++) {
			q=1;
			for (j=i,k=0;j<(tam_n+i),k<tam_n;j++,k++) {
				if (n[k]!=N[j]) {
					q=0;
				} else {
					if (k==0) pos=j;
				}
			}
			if (q==1) cont++;
		}
		
		printf("Caso #%i:\n",caso);
		if (cont==0) printf("Nao existe subsequencia\n");
		else {
			printf("Qtd.Subsequencias: %i\n",cont);
			printf("Pos: %i\n",pos+1);
		}
		printf("\n");
	}
}

