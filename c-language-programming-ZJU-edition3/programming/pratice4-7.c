#include <stdio.h>

double fact(int n)
{
	double fact = 1;
	for(int i = 1; i <= n; i++)
	{
		fact *= i;
	}

	return fact;
}

int main()
{
	int n;

	scanf("%d", &n);

	double e = 1.0;

	for(int i = 1; i <= n; i++)
	{
		e += (1.0 / fact(i));
	}

	printf("%.8lf\n", e);

	return 0;
}