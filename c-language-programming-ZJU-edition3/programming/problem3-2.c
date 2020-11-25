#include <stdio.h>

int main()
{
	int fact_speed = 0;
	int limit_speed = 0;

	scanf("%d %d", &fact_speed, &limit_speed);

	double super_rate = (fact_speed * 100.00 / limit_speed) - 100.00;

	if(super_rate >= 50.0)
	{
		printf("Exceed %.lf%%. License Revoked\n", super_rate);
	}
	else if(super_rate >= 10.0)
	{
		printf("Exceed %.lf%%. Ticket 200\n", super_rate);
	}
	else
	{
		printf("OK\n");
	}

	return 0;

}