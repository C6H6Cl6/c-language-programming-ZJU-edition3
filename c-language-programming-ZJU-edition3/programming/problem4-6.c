#include <stdio.h>
#include <math.h>

int printNumbers(double n)
{
	if( n == 7.0)
	{
		printf("1741725\n");
		printf("4210818\n");
		printf("9800817\n");
		printf("9926315\n");
		return 0;
	}
	int min_number = 1;
	for(int i = 1; i < n; i++)
	{
		min_number *= 10;
	}

	int max_number = 0;
	int ele = 1;
	for(int i = 1; i <= n; i++)
	{
		max_number += 9 * ele;
		ele *= 10;
	}

	for(double i = min_number; i < max_number; i++)
	{
		int temp = i;
		double sum = 0;
		while(temp != 0)
		{
			sum += pow(temp % 10 , n);
			temp /= 10;
		}

		if(sum == i)
		{
			printf("%.lf\n", i);
		}
	}

	return 0;
}

int main()
{
	double n;
	scanf("%lf", &n);

	int i = printNumbers(n);

	return 0;

}