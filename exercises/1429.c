#include <stdio.h>
#include <math.h>

void num_in_vec(int *, int);
long long factorial(int);
int tam_num(int);

int main()
{
	int i, n, s, vec[5];
	
	scanf("%i", &n);
	
	s = 0;
	num_in_vec(vec, n);
	
	for (i = tam_num(n); i >= 1; i--)
	{
		s += *(vec + i) * factorial(i);
	}
	
	return 0;
}

long long factorial(int n)
{
	if (n == 0 || n == 1)
		return 1;
	else
		return n * factorial(n - 1);
}

void num_in_vec(int *vec, int num)
{
	
}


int tam_num(int num)
{
	return log10(num) + 1;
}


