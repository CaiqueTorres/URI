#include <stdio.h>

void main() {
	int i,j,N,range,x,cont,maior,menor,pos_maior,pos_menor,aux;
	scanf("%i",&N);
	while (N--) {
		cont=0;
		scanf("%i",&range);
		int list[range];
		
		for (i=0;i<range;i++) {
			scanf("%i",&x);
			if (x%2!=0) {
				list[cont]=x;
				cont++;
			}
		}
		
		/*for (i=0;i<cont;i++)
			printf("%i ",list[i]);*/
			
		for (i=0;i<cont;i++) {
			if (i%2==0) {
				for (j=i;j<cont;j++) {
					if (i==j)
						pos_maior=j;
					else if (list[j]>list[pos_maior])
						pos_maior=j;
					}
				
				aux=list[i];
				list[i]=list[pos_maior];
				list[pos_maior]=aux;
				
			} else {
				for (j=i;j<cont;j++) {
					if (i==j)
						pos_menor=j;
					else if (list[j]<list[pos_menor])
						pos_menor=j;
				}
				aux=list[i];
				list[i]=list[pos_menor];
				list[pos_menor]=aux;
			}
		}
		for (i=0;i<cont;i++) {
			if (i!=cont-1)
				printf("%i ",list[i]);
			else
				printf("%i",list[i]);
		}
		printf("\n");
	}
}

