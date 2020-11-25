#include <stdio.h>

int main()
{
	int m , n;

	scanf("%d %d", &m , &n);

	double result = 0.0;

	for(int i = m; i<= n; i++)
	{
		result += (i*i + 1.0/i);
	}

	printf("sum = %.6f\n", result);

	return 0;
}