#include <stdio.h>

int main()
{
	double mile;
	int minite;

	scanf("%lf %d", &mile, &minite);

	double sum = 10.0;

	if(mile > 10.0)
	{
		sum += (mile - 10.0) * 3.00 + 14.00;
	}
	else if(mile > 3.0)
	{
		sum += (mile - 3.0) * 2.00;
	}

	sum += minite / 5 * 2;

	printf("%.lf\n", sum);

	return 0;

}