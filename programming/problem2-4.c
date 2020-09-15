#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);

	double sum = 0.0;

	for(int i = 1; i <= n; i++)
	{
		if(i % 2 == 1)
		{
			sum += i / (2.0 * i -1.0);
		}
		else
		{
			sum -= i / (2.0 * i -1.0);
		}
	}

	printf("%.3f\n", sum);

	return 0;
}