/*URI - 1089*/

#include <stdio.h>

void main () {
	
	int a,b,x,y,N,i,cont,ai,xi;
	
	while (1) {
		scanf("%i",&N);
		if (N==0)
			break;
		cont=0;
		y=x;
		for (i=0;i<N;i++) {
			scanf("%i",&a);
			if (i!=0) {
				if (a>b)
					x=1;
				else if (a<b)
					x=0;
				if (y!=x && i!=1)
					cont++;
				if (i==1)
					xi=x;
			} else
				ai=a;
				
			y=x;
			b=a;
			
			if (i==(N-1)) {
				if (a>ai)
					x=0;
				else if (a<ai)
					x=1;
				
				if (x!=y)
					cont++;
				if (x!=xi)
					cont++;
			}
		}
		printf("%i\n",cont);
	}
	
	
}
