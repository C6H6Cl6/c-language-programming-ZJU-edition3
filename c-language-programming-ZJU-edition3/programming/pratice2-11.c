#include <stdio.h>
#include <math.h>

int main()
{
	double x;

	scanf("%lf", &x);

	if(x >= 0)
	{
		printf("f(%.2f) = %.2f\n", x, sqrt(x));
	}
	else
	{
		printf("f(%.2f) = %.2f\n", x, (x + 1.0)*(x + 1.0) + 2.0 * x + 1.0 / x);
	}

	return 0;
}