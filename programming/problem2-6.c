#include <stdio.h>

long fact(int n)
{
	long result = 1;

	for(int i = 1; i <= n; i++)
	{
		result *= i;
	}

	return result;
}

int main()
{
	int n = 0;

	scanf("%d", &n);

	long sum = 0;

	for(int i = 1; i <= n; i++)
	{
		sum += fact(i);
	}

	printf("%ld\n", sum);

	return 0;
	
}