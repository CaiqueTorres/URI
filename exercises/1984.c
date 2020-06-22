#include <stdio.h>
#include <math.h>

void main() {
	int d,j,i=1;
	unsigned long long int n,div=0,c,rest=0;
	
	scanf("%llu",&n);
	
	while (div<n) {
		div=n%(int)(pow(10,i));
		i++;
	}
	
	int reversed[(i-1)];
	
	i=1;
	div=0;
	
	while (div<n) {
		div=n%(int)(pow(10,i));
		c=div-rest;
		rest=div;
		reversed[(i-1)]=(int)(c/(int)(pow(10,i-1)));
		i++;
	}
	
	for (j=0;j<(i-1);j++) {
		printf("%i",reversed[j]);
	}
	printf("\n");
}

