#include <stdio.h>

int main()
{
	int lower, upper;
	scanf("%d %d", &lower, &upper);

	if(lower > upper)
	{
		printf("Invalid.\n");
	}
	else
	{
		printf("fahr celsius\n");
		for(int i = lower; i <= upper; i += 2)
		{
			printf("%d%6.1f\n", i, 5.0 * (i - 32.0) / 9.0);
		}
	}

	return 0;
}