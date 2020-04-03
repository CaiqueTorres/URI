#include <stdio.h>
#include <string.h>

typedef struct Child
{
	char name[35];
	int value;
} Child;

void play(Child [], int, int);
int main()
{
	int N, i;
	Child vector[102];
	
	while (1)
	{
		scanf("%d", &N);
		if (N == 0)
			return 0;
		
		for (i = 0; i < N; i++)
			scanf("%s%d", &vector[i].name, &vector[i].value);
		if (N == 1)
			printf("Vencedor(a): %s\n", vector[0].name);
		else
		{
			play(vector, N, vector[0].value);
			printf("Vencedor(a): %s\n", vector[0].name);
		}
	}

	return 0;
} // main

void play(Child vector[], int tam, int passo)
{
	int j, p;
	static int i = 0, q = 0;
	Child c;
	
	if (passo % 2 == 0)
	{
		i = (((i - passo) % tam) + tam) % tam;
		q = 1;
	}
	else
	{
		if (q == 0)
		{
			i = (i + passo) % tam;
			q = 1;
		}
		else
			i = (i + passo - 1) % tam;
	}
	
	p = vector[i].value;	
	
	/*
	for (j = 0; j < tam; j++)
		printf("%s ", vector[j].name);
	printf("\n");
	*/
	
	for (j = i; j < tam; j++)
		vector[j] = vector[j + 1];
	
	if (tam == 2)
	{
		i = 0;
		q = 0;
	}
	else
		play(vector, tam - 1, p);
} // play

