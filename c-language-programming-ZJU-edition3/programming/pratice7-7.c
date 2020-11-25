#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int matrix[n][n];

	int sum = 0;

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			scanf("%d", &matrix[i][j]);

			if(j != n - 1 && i != n - 1 && j != n - i - 1)
			{
				sum += matrix[i][j];
			}
		}
	}

	printf("%d\n", sum);

	return 0;

}