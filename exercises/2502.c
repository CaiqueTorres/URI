#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main() {
	int i,j,k,C,N;
	char c;
	while (scanf("%d %d",&C,&N)!=EOF) {
		char original[C],cifra[C],text[N][1000];
		
		fflush(stdin);
		scanf("%s",&original);
		fflush(stdin);
		scanf("%s",&cifra);
		
		for (i=0;i<N;i++) {
			fflush(stdin);
			gets(text[i]);
		}
		
		for (i=0;i<N;i++) {
			for (j=0;j<1000;j++) {
				c=text[i][j];
				for (k=0;k<C;k++) {
					if (c==original[k]) {
						if (isdigit(c))
							c=tolower(cifra[k]);
						else 
							c=cifra[k];
					}
					else if (c==tolower(original[k]))
						c=tolower(cifra[k]);
					else {
						if (c==cifra[k]) {
							if (isdigit(c))
								c=tolower(original[k]);
							else 
								c=original[k];
						}
						else if (c==tolower(cifra[k]))
							c=tolower(original[k]);
					}
				}
				text[i][j]=c;
			}
		}
			
		for (i=0;i<N;i++) {
			for (j=0;j<1000;j++) {
				if (text[i][j]=='\0') {
					printf("\n");
					break;
				} else 
					printf("%c",text[i][j]);
			}
		}
		printf("\n");
	}
}
/*#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main() {
	int i,j,k,C,N;
	char c;
	while (scanf("%d %d",&C,&N)!=EOF) {
		char original[C],cifra[C],text[N][1000];
		
		fflush(stdin);
		scanf("%s",&original);
		fflush(stdin);
		scanf("%s",&cifra);
		
		for (i=0;i<N;i++) {
			fflush(stdin);
			gets(text[i]);
			
			for (j=0;j<1000;j++) {
				c=text[i][j];
				for (k=0;k<C;k++) {
					if (c==original[k]) {
						if (isdigit(c))
							c=tolower(cifra[k]);
						else 
							c=cifra[k];
					}
					else if (c==tolower(original[k]))
						c=tolower(cifra[k]);
					else {
						if (c==cifra[k]) {
							if (isdigit(c))
								c=tolower(original[k]);
							else 
								c=original[k];
						}
						else if (c==tolower(cifra[k]))
							c=tolower(original[k]);
					}
				}
				text[i][j]=c;
			}
			for (j=0;j<1000;j++) {
				if (text[i][j]=='\0') {
					printf("\n");
					break;
				} else 
					printf("%c",text[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}*/
