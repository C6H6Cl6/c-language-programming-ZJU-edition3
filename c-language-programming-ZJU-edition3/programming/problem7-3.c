#include <stdio.h>

int main()
{
	int matrix_number = 0;
	scanf("%d", &matrix_number);

	for(int i = 0; i < matrix_number; i++)
	{
		int matrix_dimension = 0;
		scanf("%d", &matrix_dimension);

		int matrix[matrix_dimension][matrix_dimension];

		for(int i = 0; i < matrix_dimension; i++)
		{
			for(int j = 0; j < matrix_dimension; j++)
			{
				scanf("%d", &matrix[i][j]);
			}
		}

		int flag = 0;

		for(int i = 1; i < matrix_dimension; i++)
		{
			for(int j = 0; j < i; j++)
			{
				if(matrix[i][j] != 0)
				{
					flag = 1;
				}
			}
		}

		if(flag == 1)
		{
			printf("NO\n");
		}
		else
		{
			printf("YES\n");
		}
	}

	return 0;
}