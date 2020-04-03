#include <stdio.h>

int main()
{
	int i,N,Ri,John,Mary;
	
	do {
		scanf("%i",&N);
		if (N>=1 && N<=10000) {
			John=Mary=0;
			for (i=0;i<N;i++) {
				scanf("%i",&Ri);
				if (Ri==1) John++;
				else if (Ri==0) Mary++;	
			}
		}
		if (N!=0) printf("Mary won %i times and John won %i times\n",Mary,John);
	} while (N!=0);
	
	return 0;
}

