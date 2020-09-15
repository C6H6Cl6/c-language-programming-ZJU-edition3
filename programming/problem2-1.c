#include <stdio.h>

int main()
{
	int num[4];
	int sum = 0;
	for(int i = 0; i <= 3; i++)
	{
		scanf("%d", &num[i]);
		sum += num[i];
	}

	float ave = 0.0;
	ave = sum / 4.0;

	printf("Sum = %d; Average = %.1f\n", sum, ave);

	return 0;

}