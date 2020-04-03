#include <stdio.h>

int main()
{
	int i,N,A,B,cont_A,cont_B;
	
	while(1) {
		scanf("%i",&N);
		if (N==0) break;
		else if (N>=1 && N<=10) {
			cont_A=cont_B=0;
			for (i=0;i<N;i++) {
				scanf("%i %i",&A,&B);
				if (A>=1 && A<=10 && B>=1 && B<=10) {
					if (A>B) cont_A++;
					else if (B>A) cont_B++;
				}
			}
			printf("%i %i\n",cont_A,cont_B);
		}
	}
		
	return 0;
}

