#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	long result = 1;
	printf("pow(3,0) = %ld\n", result);

	for(int i = 1; i <= n; i++)
	{
		result *= 3;
		printf("pow(3,%d) = %ld\n", i, result);
	}

	return 0;
}