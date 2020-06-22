/*URI - 1047*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int hi,mi,hf,mf;
	int var_h,var_m;
	
	scanf("%i%*c%i%*c%i%*c%i",&hi,&mi,&hf,&mf);
	
	var_h=hf-hi;
	var_m=mf-mi;
	
	if (var_m<0)
	{
		mf+=60;
		hf--;
	}
	
	var_h=hf-hi;
	var_m=mf-mi;
		
	if (var_h<0)
	{
		hf+=24;
	}
	
	var_h=hf-hi;
	var_m=mf-mi;
	
	if (var_h==0 && var_m==0)
	{
		var_m=0;
		var_h=24;
	}	
	
	printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n",var_h,var_m);
	
	system("PAUSE");
	return 0;
}

