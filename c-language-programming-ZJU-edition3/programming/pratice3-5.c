#include <stdio.h>

int caculate(int num)
{
	int count = 0;

	for(int i = 2001; i <= num; i++)
	{
		if(i % 4 == 0 && i % 100 != 0)
		{
			count++;
			printf("%d\n", i);
		}
		else if(i % 400 == 0)
		{
			count++;
			printf("%d\n", i);
		}
	}

	return count;
}

int main()
{
	int n = 0;

	scanf("%d", &n);
	int count = 0;

	if(n <= 2000 || n > 2100)
	{
		printf("Invalid year!\n");
	}
	else
	{
		if(caculate(n) == 0)
		{
			printf("None\n");
		}
	}

	return 0;
}