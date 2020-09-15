#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int min;
	int temp;

	scanf("%d", &min);

	for(int i = 2; i <= n; i++)
	{
		scanf("%d", &temp);
		if(temp < min)
		{
			min = temp;
		}
	}

	printf("min = %d\n", min);

	return 0;
}