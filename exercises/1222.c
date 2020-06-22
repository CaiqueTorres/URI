#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cont = 0;

char** split(char **, char *, char);
char* substring(char *, int, int);
void allocateString(char **, int);

int main()
{
	int i, j;
	char **array = NULL, text[80];
	
	gets(text);
	split(array, text, ' ');
//	for (i = 0; i < cont; i++)
//	{
//		printf("%s\n", *(array + i));
//	}
	
	return 0;
}

char** split(char **array, char *text, char letter)
{
	int i, firstPosition;
	char *aux = NULL;
	
	for (i = 0; i < strlen(text) + 1; i++)
	{
		if (i == 0)
		{
			firstPosition = 0;
		}
		else if (*(text + i) == ' ' || *(text + i) == '\0')
		{
			allocateString(&aux, i + 2); // \0
			strcpy(aux, substring(text, firstPosition, i + 1));
			
			if ((array = (char **)realloc(array, (++cont) * sizeof(char *))) == NULL)
				exit(1);
			
			
			firstPosition = i + 1;
			printf("%s %p\n", *(array + cont - 1), array + cont - 1);
		}
	}
	
	printf("\n\n");
	for (i = 0; i < cont; i++)
	{
		printf("%s %p\n", *(array + i), (array + i));
	}
	
	return array;
}

char* substring(char *text, int start, int end)
{
	int i, j;
	char *aux = NULL;
	
	allocateString(&aux, end - start);
	for (i = start, j = 0; i < end; i++, j++)
		*(aux + j) = *(text + i);
	*(aux + j) = '\0';
	
	return aux;
}

void allocateString(char **ptr, int tam)
{
	if ((*ptr = (char *)realloc(*ptr, tam * sizeof(char))) == NULL)
		exit(1);
}

