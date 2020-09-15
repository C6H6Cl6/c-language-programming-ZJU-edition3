#include <stdio.h>

// 对于n阶方阵每行循环右移1次
void rotate_right(int *matrix, int n);

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);

	int matrix[n][n];

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}

	for(int i = 0; i < m % n; i++)
	{
		rotate_right(&matrix[0][0], n);
	}

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}

	return 0;


}

void rotate_right(int *matrix, int n)
{
	// 第i行
	for(int i = 0; i < n; i++)
	{
		// 临时存储每行最后一个元素
		int temp = matrix[i*n + n - 1];
		for(int j = n - 1; j >= 0; j--)
		{
			// 如果是每行第一个元素，循环右移一位后变为每行最后一个元素的值
			if(j == 0)
			{
				matrix[i*n + j] = temp;
			}
			else
			{
				matrix[i*n + j] = matrix[i*n + j - 1];
			}
		}
	}
}