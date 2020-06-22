#include <stdio.h>
#include <string.h>

int max(int, int);
int lcs(char *, char*, int, int);

int main()
{
	char a[10] = "an", b[10] = "abn";
	printf("%i\n", lcs(a, b, strlen(a), strlen(b)));
	
	return 0;
}

int max(int a, int b)
{
	return a > b ? a : b;
}

int lcs(char *X, char *Y, int m, int n) 
{
	if (m == 0 || n == 0)
		return 0;
	if (*(X + m - 1) == *(Y + n - 1))
		return lcs(X, Y, m - 1, n - 1) + 1;
	else
		return max(lcs(X, Y, m, n - 1), lcs(X, Y, m - 1, n));
}

