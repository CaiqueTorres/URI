#include <stdio.h>

int main()
{
	int aux1,aux2=0,i,N,f=0;
	
	scanf("%i",&N);
	if (N>1 && N<46) {
		for (i=0;i<N;i++) {
			if (i==1) f+=1;
			else {
				aux1=f;
				f=aux1+ aux2;
				aux2=aux1;
			}
			
			if (i==(N-1)) printf("%i\n",f);
			else printf("%i ",f);
		}
	}
	
	return 0;
}

