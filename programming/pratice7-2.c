#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	int max;

	int index = 0;
	scanf("%d", &max);

	int input;

	for(int i = 1; i < n; i++)
	{
		scanf("%d", &input);
		if(input > max)
		{
			max = input;
			index = i;
		}
	}

	printf("%d %d\n", max, index);

	return 0;

}