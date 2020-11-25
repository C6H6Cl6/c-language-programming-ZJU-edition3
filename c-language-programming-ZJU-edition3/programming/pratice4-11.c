#include <stdio.h>

int isPrime(int n)
{
	if( n <= 1)
	{
		return 0;
	}

	int flag = 1;
	for(int i = 2; i <= n/2; i++)
	{
		if(n % i == 0)
		{
			flag = 0;
		}
	}

	return flag;
}

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);

	int sum = 0;
	int count = 0;

	for(int i = m; i <= n; i++)
	{
		if(isPrime(i))
		{
			sum += i;
			count++;
		}
	}

	printf("%d %d\n", count, sum);

	return 0;
}