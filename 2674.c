#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_prime(int);
void main() {
	int N,tam,i,k,c,q,a;
	char numero[20];
	while (scanf("%d",&N)!=EOF) {
		if (is_prime(N)) {
			q=1;
			
			sprintf(numero,"%d",N);
			tam=strlen(numero);
			
			for (i=0;i<tam;i++) {
				a=numero[i];
				a-=48;
				if (!is_prime(a))
					q=0;
			} 
					
			if (q==1) printf("Super\n");
			else printf("Primo\n");
		} else printf("Nada\n");
	}
}

int is_prime(int N)
{
    int p;
    if(N==0 || N==1) return 0;
    for(p=2;p*p<=N;p++)
        if(N%p==0) return 0;
    return 1;
}

