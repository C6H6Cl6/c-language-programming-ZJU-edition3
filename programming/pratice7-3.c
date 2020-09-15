#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int numbers[n];

	for(int i = 0; i < n; i++)
	{
		scanf("%d", &numbers[i]);
	}

	for(int i = 0; i < n / 2; i++)
	{
		int temp = numbers[i];
		numbers[i] = numbers[n - i - 1];
		numbers[n - i - 1] = temp;
	}

	for(int i = 0; i < n; i++)
	{
		if(i == n - 1)
		{
			printf("%d\n", numbers[i]);
		}
		else
		{
			printf("%d ", numbers[i]);
		}
	}

	return 0;
}