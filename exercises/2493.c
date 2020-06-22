#include <stdio.h>
#include <string.h>

void main()
{
	int T,i,j,index[50],acerto[50],q,r,pos;
	long int M[50][3];
	char name[50][50],op[50],reprovados[50][50],aux[50];
	
	while (scanf("%i",&T)!=EOF)
	{
		for (i=0;i<T;i++)
			scanf("%i %i=%i",&M[i][0],&M[i][1],&M[i][2]);
		
		for (i=0;i<T;i++)
			scanf("%s %i %c",&name[i],&index[i],&op[i]);
			
		for (i=0;i<T;i++)
			for (j=0;j<T;j++)
				if (index[i]-1==j)
				{
					acerto[i]=0;
					switch(op[i])
					{
						case '+':
							if (M[j][0]+M[j][1]==M[j][2])
								acerto[i]=1;
							break;
						case '-':
							if (M[j][0]-M[j][1]==M[j][2])
								acerto[i]=1;
							break;
						case '*':
							if (M[j][0]*M[j][1]==M[j][2])
								acerto[i]=1;
							break;
						case 'I':
							if (M[j][0]*M[j][1]!=M[j][2] && M[j][0]-M[j][1]!=M[j][2] && M[j][0]+M[j][1]!=M[j][2])
								acerto[i]=1;
							break;
					}
				}
		
		q=0;
		r=0;
		for (i=0;i<T;i++)
		{
			if (acerto[i]!=0)
				q=1;
			else if (acerto[i]!=1)
				r=1;
		}
		
		if (q==0)
			printf("None Shall Pass!\n");
		else if (r==0)
			printf("You Shall All Pass!\n");
		else
		{
			pos=0;
			for (i=0;i<T;i++)
				if (acerto[i]==0)
				{
					strcpy(reprovados[pos],name[i]);
					pos++;
				}
				
			for (i=0;i<pos;i++)
				for (j=i;j<pos;j++)
					if (strcmp(reprovados[i],reprovados[j])>0)
					{
						strcpy(aux,reprovados[i]);
						strcpy(reprovados[i],reprovados[j]);
						strcpy(reprovados[j],aux);
					}
			
			for (i=0;i<pos;i++)
			{
				if (i!=pos-1)
					printf("%s ",reprovados[i]);
				else
					printf("%s\n",reprovados[i]);
			}
		}
	}
}

