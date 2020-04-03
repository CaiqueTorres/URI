//URI - 1046
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int hi,hf;

	scanf("%i%*c%i",&hi,&hf);

	if (hf-hi<=0)
		hf+=24;

	printf("O JOGO DUROU %i HORA(S)\n",hf-hi);

	system("PAUSE");
	return 0;
}
