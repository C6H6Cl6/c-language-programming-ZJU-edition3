#include <stdio.h>

int main()
{
	int n = 0;
	float sum = 0;
	int count = 0;

	scanf("%d", &n);

	for(int i = 1; i <= n; i++)
	{
		int mark = 0;
		scanf("%d", &mark);
		sum += mark;
		if(mark >= 60)
		{
			count++;
		}
	}

	if(n > 0)
	{
		printf("average = %.1f\n", sum / n);
		printf("count = %d\n", count);
	}
	else
	{
		printf("average = 0.0\n");
		printf("count = 0\n");
	}

	return 0;

}