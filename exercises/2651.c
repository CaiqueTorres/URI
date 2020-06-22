/*URI - 2651*/

#include <stdio.h>
#include <string.h>

int test(char *, char *);
void toLower(char *);
int main()
{
	char text[100002], word[] = "zelda";
	
	scanf("%s", text);
	toLower(text);
	
	if (test(text, word))
		printf("Link Bolado\n");
	else
		printf("Link Tranquilo\n");
		
	return 0;
} //main

int test(char *text, char *word)
{
	int i, equal = 0, tam = 0;
	char *pw;
	
	pw = word;
	for (i = 0; i < strlen(text) + 1; i++)
	{
		if (tam == strlen(word))
			return 1;
		
		if (*(text + i) == *pw)
		{
			pw++;
			tam++;
			continue;
		}
		pw = word;
		tam = 0;
	}
	return 0;
} //test

void toLower(char *text)
{
	int i;
	for (i = 0; i < strlen(text); i++)
		if (*(text + i) >= 'A' && *(text + i) <= 'Z')
			*(text + i) += 32;
} //toLower
