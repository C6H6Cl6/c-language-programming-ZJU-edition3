#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	double sum = 0;
	double max = 0;
	double min = 1000;

	double input = 0;

	for(int i = 0; i < n; i++)
	{
		scanf("%lf", &input);
		sum += input;

		if(input < min)
		{
			min = input;
		}
		if(input > max)
		{
			max = input;
		}
	}

	printf("average = %.2lf\n", sum / n);
	printf("max = %.2lf\n", max);
	printf("min = %.2lf\n", min);

	return 0;
}