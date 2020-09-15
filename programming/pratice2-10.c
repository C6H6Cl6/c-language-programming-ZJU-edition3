#include <stdio.h>

int main()
{
	double num;
	scanf("%lf", &num);

	if(num != 0.0)
	{
		printf("f(%.1f) = %.1f\n", num, 1.0 / num);
	}
	else
	{
		printf("f(0.0) = 0.0\n");
	}

	return 0;
}