#include <stdio.h>

int main()
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

	for(int i = 0; i < matrix_dimension; i++)
	{
		int row_max = matrix[i][0];
		for(int j = 1; j < matrix_dimension; j++)
		{
			if(matrix[i][j] > row_max)
			{
				row_max = matrix[i][j];
			}
		}

		for(int j = 0; j < matrix_dimension; j++)
		{
			if(matrix[i][j] == row_max)
			{
				int flag = 1;

				for(int k = 0; k < matrix_dimension; k++)
				{
					if(matrix[k][j] < row_max)
					{
						flag = 0;
						break;
					}
				}

				if(flag)
				{
					printf("%d %d\n", i, j);
					return 0;
				}
			}
		}

		
	}

	printf("NONE\n");
	return 0;
}