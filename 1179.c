#include <stdio.h>
#include <stdint.h>

void main() {
	const int rep=15;
	int n,i,j,par[5],impar[5],c_par,c_impar;
	c_par=c_impar=0;
	
	for (i=0;i<15;i++) {
		scanf("%i",&n);
		if (n%2==0) {
			par[c_par]=n;
			c_par++;
		} else {
			impar[c_impar]=n;
			c_impar++;
		} if (c_par==5) {
			c_par=0;
			for (j=0;j<5;j++) printf("par[%i] = %i\n",j,par[j]);
		} else if (c_impar==5) {
			c_impar=0;
			for (j=0;j<5;j++) printf("impar[%i] = %i\n",j,impar[j]);
		}
	}
	for (i=0;i<c_impar;i++) printf("impar[%i] = %i\n",i,impar[i]);
	for (i=0;i<c_par;i++) printf("par[%i] = %i\n",i,par[i]);
}
