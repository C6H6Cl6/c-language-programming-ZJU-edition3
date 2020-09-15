#include <stdio.h>
#include <math.h>

double fact(int n)
{
	double fact = 1;
	for(int i = 1; i <= n; i++)
	{
		fact *= i;
	}

	return fact;
}

double caculate(double x, double k)
{
	double result;

	result = pow(x, k) / fact(k);

	return result;

}

int main()
{
	double sum = 1.0;

	double x, k;

	scanf("%lf", &x);
	k = 1;
	double temp;

	do
	{
		temp = caculate(x, k);
		sum += temp;;
		k++;

	}while(temp > 0.00001);

	printf("%.4lf\n", sum);

	return 0;
}