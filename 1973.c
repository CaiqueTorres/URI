#include <stdio.h>

void main() {
	int q=0;
	long long int i,pos=0,sheep_i=0,sheep_f=0,cont=0;
	long long int N;
	
	scanf("%lli",&N);
	long long int X[N];
	
	for (i=0;i<N;i++) {
		scanf("%lli",&X[i]);
		sheep_i+=X[i];
	}
		
	for (i=0;i<N;i++) {
		cont++;
		if (X[i]%2!=0) {
			pos++;
			X[i]--;
		} else {
			X[i]--;
			q=1;
			break;
		}
	} 
	if (q==1) {
		for (i=(pos-1);i>=0;i--) {
			if (X[i]==0) break;
			X[i]--;
		}
	}
	
	for (i=0;i<N;i++) sheep_f+=X[i];
	printf("%lli %lli\n",cont,sheep_f);
}

