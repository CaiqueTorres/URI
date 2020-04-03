#include <stdio.h>

int main()
{
	int L,R;
	
	do {
		scanf("%i %i",&L,&R);
		if (L>=1 && L<=5 && R>=1 && R<=5) {
			printf("%i\n",L+R);
		}
	} while (L!=0 && R!=0);
		
	return 0;
}

