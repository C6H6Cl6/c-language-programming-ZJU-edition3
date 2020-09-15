#include <stdio.h>

int main()
{
	int inputNum = 0;
	double price[4] = {3.00, 2.50, 4.10, 10.20};

	printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");

	for(int i = 1; i <= 5; i++)
	{
		scanf("%d", &inputNum);

		if(inputNum == 0)
		{
			break;
		}
		else if(inputNum >= 5 || inputNum < 0)
		{
			printf("price = 0.00\n");
		}
		else
		{
			printf("price = %.2lf\n", price[inputNum - 1]);
		}
	}

	return 0;
}