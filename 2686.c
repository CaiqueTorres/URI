#include <stdio.h>
	
void main() {
	double M,soma,hora,minuto,segundo;
	while ((scanf("%lf",&M))!=EOF) {
		if (M>=0 && M<90) {
			printf("Bom Dia!!");
			soma=6;
		} else if (M>=90 && M<180) {
			printf("Boa Tarde!!");
			soma=12;
			M-=90;
		} else if (M>=180 && M<270) {
			printf("Boa Noite!!");
			soma=18;
			M-=180;
		} else {
			printf("De Madrugada!!");
			soma=0;
			M-=270;
		}
		soma+=6*M/90;
		
		hora=soma;
		
		minuto=hora-(int)hora;
		minuto*=60;
		minuto+=0.00001;
		
		segundo=minuto-(int)minuto;
		segundo*=60;
		
		printf("\n");
		
		if (hora<10) printf("0%i:",(int)hora);
		else printf("%i:",(int)hora);
		
		if (minuto<10) printf("0%.0f:",minuto);
		else printf("%.0f:",minuto);
		
		if (segundo<10) printf("0%i\n",(int)segundo);
		else printf("%i\n",(int)segundo);		
	}
}
