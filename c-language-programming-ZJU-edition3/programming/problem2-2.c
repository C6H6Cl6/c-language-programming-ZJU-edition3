#include <stdio.h>

int main()
{
	float num = 0;
	scanf("%f", &num);

	float result = 0.0;

	if(num > 50)
	{
		result = 50 * 0.53 + (num - 50) * 0.58;
		printf("cost = %.2f\n", result);
	}
	else if(num < 0)
	{
		printf("Invalid Value!\n");
	}
	else
	{
		result = num * 0.53;
		printf("cost = %.2f\n", result);
	}

	return 0;
}