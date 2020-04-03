#include <stdio.h>

void main() {
	int N,nums,cont=0,pos;
	while ((scanf("%i",&N))!=EOF) {
		int i,j;
		nums=pos=0;
		cont++;
		
		for (i=0;i<=N;i++) {
			if (i==0) {
				nums++;
			} else {
				for (j=0;j<i;j++) {
					nums++;
				}
			}				
		} 
		
		int numbers[nums];
	
		for (i=0;i<=N;i++) {
			if (i==0) numbers[i]=0;
			else for (j=0;j<i;j++) {
				pos++;
				numbers[pos]=i;
			}	
		}
		
		if (nums==1) printf("Caso %i: %i numero\n",cont,nums);
		else printf("Caso %i: %i numeros\n",cont,nums);
		
		for (i=0;i<nums;i++) {
			if (i==(nums-1)) printf("%i\n",numbers[i]);
			else printf("%i ",numbers[i]);
		}
		
		printf("\n");
	}
}

