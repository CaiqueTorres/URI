#include <stdio.h>
#include <string.h>

void main() {
	int i,p,q,letra_p,a,letra_q,cont,tam,s,N,Q;
	scanf("%i",&N);
	char query[100],text[N][100];
	
	for (i=0;i<N;i++) {
		fflush(stdin);
		scanf("%s",&text[i]);
	}
	
	scanf("%i",&Q);
	for (i=0;i<Q;i++) {
		fflush(stdin);
		scanf("%s",&query);
		
		tam=0;		
		cont=0;
		for (p=0;p<N;p++) {
			
			a=strlen(text[p])-(strlen(query))+1;
			
			for (q=0;q<a;q++) {
				s=1;
				for (letra_q=0,letra_p=q;letra_q<strlen(query),letra_p<strlen(query)+q;letra_q++,letra_p++) {
					if (query[letra_q]!=text[p][letra_p])
						s=0;
				}
				if (s==1) {
					cont++;
					if (p==0)
						tam=strlen(text[p]);
					else if (strlen(text[p])>tam)
						tam=strlen(text[p]);
				}
			}
		}
		
		if (cont==0)
			printf("-1\n");
		else printf("%i %i\n",cont,tam);
	}
}



