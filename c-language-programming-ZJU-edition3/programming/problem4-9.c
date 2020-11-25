#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	for(int i = 1; i <= n / 2 + 1; i++)
	{
		// 打印空格
		for(int j = 1; j <= (n - (2 * i - 1)) / 2; j++)
		{
			printf("  ");
		}
		// 打印星号
		for(int k = 1; k <= 2 * i - 1; k++)
		{
			printf("* ");
		}
		printf("\n");

	}

	for(int i = n / 2 ; i >= 1; i--)
	{
		// 打印空格
		for(int j = 1; j <= (n - (2 * i - 1)) / 2; j++)
		{
			printf("  ");
		}
		// 打印星号
		for(int k = 1; k <= 2 * i - 1; k++)
		{
			printf("* ");
		}
		printf("\n");

	}

	return 0;
}