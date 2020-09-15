#include <stdio.h>

int main()
{
	int m, n;

	scanf("%d %d", &m, &n);

	for(int i = 0; i < m; i++)
	{
		int sum = 0;
		for(int j = 0; j < n; j++)
		{
			int num = 0;
			scanf("%d", &num);
			sum += num;
		}
		printf("%d\n", sum);
	}

	return 0;
}