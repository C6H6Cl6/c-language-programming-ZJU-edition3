#include <stdio.h>

int main()
{
	double e; 
	scanf("%lf", &e);

	double sum = 0.0;

	int count = 1;

	double i = 1.0;

	while(1.0/i > e)
	{
		if(count % 2 == 1)
		{
			sum = sum + (1.0 / i);
		}
		else
		{
			sum = sum - (1.0 / i);
		}
		count++;
		i = i + 3;
	}

	if(count % 2 == 1)
	{
		sum = sum + (1.0 / i);
	}
	else
	{
		sum = sum - (1.0 / i);
	}

	printf("sum = %.6lf\n", sum);

	return 0;
}