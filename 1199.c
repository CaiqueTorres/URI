#include <stdio.h>
#include <string.h>
#include <math.h>

int is_numeric(char []);
void hex_for_bin(char [], char []);
long long int bin_for_dec(char []);

int main()
{
	long long x;
	char number[100], bin[100];
	
	do
	{
		scanf("%s", &number);
		if (number[0] == '-')
			continue;
		
		if (is_numeric(number))
		{
			x = atoll(number);
			printf("0x%llX\n", x);
		}
		else
		{
			hex_for_bin(number, bin);
			x = bin_for_dec(bin);
			printf("%lli\n", x);
		}
		
	} while (number[0] != '-');
	
	return 0;	
} // main

int is_numeric(char number[])
{
	int i;
	for (i = 0; i < strlen(number); i++)
		if (!isdigit(number[i]))
			return 0;
	return 1;
} // is_numeric

long long int bin_for_dec(char bin[])
{
	int i, j, tam = strlen(bin);
	long long dec = 0;
	
	for (i = 0, j = (tam - 1);i < tam; i++, j--)
		if (bin[i] == '1')
			dec += pow((double)2, j);
	
	return (long long)dec;
} // bin_for_dec

void hex_for_bin(char hex[], char bin[])
{
	int i;
	bin[0] = '\0';
	
	for (i=2;i<strlen(hex);i++)
	{
		switch(hex[i])
		{
			case '0':
				strcat(bin, "0000");
				break;
			case '1':
				strcat(bin, "0001");
				break;
			case '2':
				strcat(bin, "0010");
				break;
			case '3':
				strcat(bin, "0011");
				break;
			case '4':
				strcat(bin, "0100");
				break;
			case '5':
				strcat(bin, "0101");
				break;
			case '6':
				strcat(bin, "0110");
				break;
			case '7':
				strcat(bin, "0111");
				break;
			case '8':
				strcat(bin, "1000");
				break;
			case '9':
				strcat(bin, "1001");
				break;
			case 'a':
				strcat(bin, "1010");
				break;
			case 'b':
				strcat(bin, "1011");
				break;
			case 'c':
				strcat(bin, "1100");
				break;
			case 'd':
				strcat(bin, "1101");
				break;
			case 'e':
				strcat(bin, "1110");
				break;
			default:
				strcat(bin, "1111");
				break;
		}
	}
} // hex_for_bin

