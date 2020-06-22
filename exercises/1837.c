#include <stdio.h>

void main() {
	int a,b,r,i;
	double q;
	scanf("%i %i",&a,&b);
	for (r=0;r<abs(b);r++) {
		q=(a-r)/(double)b;
		if (q==(int)q) break;
	}
	
	printf("%i %i\n",(int)q,r);
}

