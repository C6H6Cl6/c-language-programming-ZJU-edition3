#include <stdio.h>

void caculate(double h, double n)
{
	double s = h;
	double h_n = h / 2.0;

	if( n == 0.0)
	{
		s = 0.0;
		h_n = 0.0;
	}

	for(int i = 2; i <= n; i++)
	{
		s += h;
		h /= 2.0;
		h_n = h / 2.0;
	}

	printf("%.1lf %.1lf\n", s, h_n);
}

int main()
{
	double h, n;

	scanf("%lf %lf", &h, &n);

	caculate(h, n);

	return 0;


}