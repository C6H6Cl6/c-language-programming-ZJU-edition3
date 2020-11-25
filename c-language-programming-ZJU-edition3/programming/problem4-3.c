#include <stdio.h>

int main()
{
	double up_number = 2.0;
	double down_number = 1.0;

	int n;

	scanf("%d", &n);

	double sum = 0.0;

	for(int i = 1; i <= n; i++)
	{
		sum += up_number / down_number;

		double temp = up_number;

		up_number = up_number + down_number;
		down_number = temp;
	}

	printf("%.2lf\n", sum);

	return 0;
}