#include <stdio.h>

int main()
{
	int mark = 0;

	scanf("%d", &mark);

	if(mark >= 90)
	{
		printf("A\n");
	}else if(mark >= 80)
	{
		printf("B\n");
	}else if(mark >= 70)
	{
		printf("C\n");
	}else if(mark >= 60)
	{
		printf("D\n");
	}else
	{
		printf("E\n");
	}

	return 0;
}