/*URI - 1163*/

#include <stdio.h>
#include <math.h>

void main() {
	int i,n;
	double h,h_max,p1,p2,a,v,vx,vy,tmp_total,tmp_subida,tmp_descida,velocidade_final,x;
	const double g=9.80665;
	const double pi=3.14159;
	
	while (scanf("%lf",&h)!=EOF) {
		scanf("%lf %lf",&p1,&p2);
		scanf("%i",&n);
		for (i=0;i<n;i++) {
			scanf("%lf %lf",&a,&v);
			
			a=a*pi/180;
			
			vx=v*cos(a);
			vy=v*sin(a);
			
			tmp_subida=vy/g;
			h_max=vy*tmp_subida-0.5*g*tmp_subida*tmp_subida;
			h_max+=h;
			velocidade_final=sqrt(2*g*h_max);
			tmp_descida=velocidade_final/g;
			tmp_total=tmp_descida+tmp_subida;
			
			x=vx*tmp_total;
			printf("%.5lf -> ",x);
			if (x>=p1 && x<=p2)
				printf("DUCK\n");
			else
				printf("NUCK\n");
		}
		
	}
}

