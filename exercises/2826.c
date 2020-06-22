#include <stdio.h>
#include <string.h>

int main()
{
	int i, j, tam1, tam2, x;
	char text1[21], text2[21], aux;
	
	fflush(stdin);
	scanf("%s", &text1);
	
	fflush(stdin);
	scanf("%s", &text2);
	
	x = strcmp(text1, text2);
	if (x > 0)
		printf("%s\n%s\n", text2, text1);
	else
		printf("%s\n%s\n", text1, text2);
	
	return 0;
}

