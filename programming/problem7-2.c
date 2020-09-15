#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	int number = 0;

	int nums[10];
	for(int i = 0; i < 10; i++)
	{
		nums[i] = 0;
	}

	for(int i = 0; i < n; i++)
	{
		scanf("%d", &number);

		do
		{
			nums[number % 10]++;
			number /= 10;
		}while(number != 0);
	}

	int max = 0;
	for(int i = 0; i < 10; i++)
	{
		if(nums[i] > max)
		{
			max = nums[i];
		}
	}

	printf("%d:", max);

	int count = 1;
	for(int i = 0; i < 10; i++)
	{
		if(nums[i] == max)
		{
			printf(" %d", i);
		}
	}

	printf("\n");

	return 0;
}