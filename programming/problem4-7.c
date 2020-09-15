#include <stdio.h>

int max_prime(int m, int n)
{
	int max;
	if(n < m)
	{
		max = n;
	}
	else
	{
		max = m;
	}

	int result = 1;

	for(int i = 1; i <= max; i++)
	{
		if(m % i == 0 && n % i == 0)
		{
			result = i;
		}
	}

	return result;
}

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);

	int max = max_prime(m, n);

	printf("%d %d\n", max, m * n / max);

	return 0;


}