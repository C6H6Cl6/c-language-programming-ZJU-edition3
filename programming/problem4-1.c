#include <stdio.h>

int main()
{
	int sum = 0;

	int input;

	scanf("%d", &input);

	while(input > 0)
	{
		if(input % 2 == 1)
		{
			sum += input;
		}

		scanf("%d", &input);
	}

	printf("%d\n", sum);

	return 0;
}