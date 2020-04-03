#include <stdio.h>
#include <math.h>

void main() {
	int i,t,T,PA,PB,PAf,PBf;
	double G1,G2;
	
	scanf("%d",&T);
	if (T>=1 && T<=3000) {
		for (i=0;i<T;i++) {
			scanf("%d%*c%d%*c%lf%*c%lf",&PA,&PB,&G1,&G2);
			if (PA>=100 && PA<=1000000 && PB>=100 && PB<=1000000 && PA<PB
			&& G1>=0.1 && G1<=10.0 && G2>=0.0 && G2<=10.0 && G2<G1) {
				
				t=0;
				
				while (PA<=PB) {
					t++;
					PA*=(G1/100)+1;
					PB*=(G2/100)+1;
					if (t>100) break;
				}
				
				/*
				PAf=PA;
				PBf=PB;		
				while (PAf<PBf) {
					t++;
					PBf=PB*((int)pow((1.0+(G2/100)),t));
					PAf=PA*pow((1.0+(G1/100)),t);
					
					printf("A=%i B=%i C=%i\n",PAf,PBf,t);
					if (t>100) break;
				}
				*/
				
				if (t>100) printf("Mais de 1 seculo.\n");
				else printf("%i anos.\n",t);
			}
			
		}		
	}
}

