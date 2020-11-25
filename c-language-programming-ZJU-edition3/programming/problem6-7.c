#include <stdio.h>

int main()
{
	char op = '0';
	int number;
	int result;
	int isnan = 0;

	scanf("%d", &result);

	while(op != '=')
	{
		scanf("%c", &op);
		if(op == '=')
		{
			break;
		}
		scanf("%d", &number);

		if(op == '+')
		{
			result += number;
		}
		else if(op == '-')
		{
			result -= number;
		}
		else if(op == '*')
		{
			result *= number;
		}
		else if(op == '/')
		{
			if(number == 0)
			{
				isnan = 1;
				break;
			}
			else
			{
				result /= number;
			}
		}
		else
		{
			isnan = 1;
		}
	}

	if(isnan == 1)
	{
		printf("ERROR\n");
	}
	else
	{
		printf("%d\n", result);
	}

	return 0;

}