#include <stdio.h>

int na(int a, int n)
{
	int result = 0;
	int k = 1;
	for(int i = 1; i <= n; i++)
	{
		result += a*k;
		k *= 10;
	}

	return result;
}

int main()
{
	int a, n;
	scanf("%d %d", &a, &n);

	int result = 0;

	for(int i = 1; i <= n; i++)
	{
		result += na(a, i);
	}

	printf("s = %d\n", result);

	return 0;

}