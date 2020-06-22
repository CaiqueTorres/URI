/*URI - 1467*/

#include <stdio.h>

int main()
{
	int A,B,C;
	
	while(scanf("%i %i %i",&A,&B,&C)!=EOF) {
		if ((A==1 || A==0) && (B==1 || B==0) && (C==1 || C==0)) {		
			if (A==B && B!=C) printf("C\n");
			else if (A!=B && B==C) printf("A\n");
			else if (A==C && A!=B) printf("B\n");
			else printf("*\n");
		}
	}
	return 0;
}
