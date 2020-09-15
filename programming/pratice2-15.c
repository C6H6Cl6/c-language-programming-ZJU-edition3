#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	double result = 0.0;

	for(int i = 0; i < n; i++)
	{
		if(3 * i % 2 == 0)
		{
			result += 1.0 / (1.0 + 3*i);
		}
		else
		{
			result -= 1.0 / (1.0 + 3*i);
		}
	}

	printf("sum = %.3f\n", result);

	return 0;
}