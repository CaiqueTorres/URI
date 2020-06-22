/*URI - 1193*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

long long int bin_for_dec(char *, int);
int main()
{
	int N, tam, cont = 0, i, j, k;
	long long int dec, div, rest, num2[33], aux;
	char num1[33], type[5], num3[33];
	scanf("%i", &N);
	while (N--)
	{
		
		fflush(stdin);
		scanf("%s %s", &num1, &type);
		tam = strlen(num1);
		printf("Case %i:\n", cont++ + 1);

		if (type[0] == 'd')
		{
			//Decimal
			dec = atoll(&num1[0]);
			
			printf("%llx hex\n", dec);
			
			if (strcmp(num1, "1") == 0)
				printf("1 bin\n");
			else
			{
				k = 0;
				div = dec;
				while (div != 1 && div != 0)
				{
					rest = div%2;
					div = div/2;
					num2[k] = rest;
					
					k++;
					
					if (div == 1 || div == 0)
						num2[k] = div;
				}
	
				for (i = 0, j = k;i <= k/2, j > k/2;i++, j--)
				{
					aux = num2[i];
					num2[i] = num2[j];
					num2[j] = aux;
				}
				
				for (i=0;i<k+1;i++)
					printf("%lli", num2[i]);
				printf(" bin\n");
			}
			
		} else if (type[0] == 'h')
		{
			num3[0] = '\0';
			
			//Hexadecimal
			for (i=0;i<tam;i++)
			{
				switch(num1[i])
				{
					case '0':
						strcat(num3, "0000");
						break;
					case '1':
						strcat(num3, "0001");
						break;
					case '2':
						strcat(num3, "0010");
						break;
					case '3':
						strcat(num3, "0011");
						break;
					case '4':
						strcat(num3, "0100");
						break;
					case '5':
						strcat(num3, "0101");
						break;
					case '6':
						strcat(num3, "0110");
						break;
					case '7':
						strcat(num3, "0111");
						break;
					case '8':
						strcat(num3, "1000");
						break;
					case '9':
						strcat(num3, "1001");
						break;
					case 'a':
						strcat(num3, "1010");
						break;
					case 'b':
						strcat(num3, "1011");
						break;
					case 'c':
						strcat(num3, "1100");
						break;
					case 'd':
						strcat(num3, "1101");
						break;
					case 'e':
						strcat(num3, "1110");
						break;
					default:
						strcat(num3, "1111");
						break;
				}
			}
			
			while (num3[0] != '1')
			{
				for (i=0;i<strlen(num3);i++)
					if (i != strlen(num3))
						num3[i] = num3[i + 1];
			}
			
			printf("%lli dec\n", bin_for_dec(num3, strlen(num3)));
			printf("%s bin\n", num3);
			
		} else if (type[0] = 'b')
		{
			//Bin�rio
			dec = bin_for_dec(num1, strlen(num1));
			printf("%lli dec\n", dec);
			printf("%llx hex\n", dec);
			
		}
		printf("\n");
	}
	
	return 0;
}

long long int bin_for_dec(char *n, int tam)
{
	int i, j;
	long long dec = 0;
	
	for (i = 0, j = (tam - 1);i < tam; i++, j--)
		if (n[i] == '1')
			dec += pow((double)2, j);
	
	return (long long)dec;
}

