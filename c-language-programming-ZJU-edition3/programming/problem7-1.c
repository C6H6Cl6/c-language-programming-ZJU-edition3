#include <stdio.h>

// 从大到小选择排序
void selectionSort(int *nums, int n);

int main()
{
	int n = 0;

	scanf("%d", &n);

	int nums[n];

	for(int i = 0; i < n; i++)
	{
		scanf("%d", &nums[i]);
	}

	selectionSort(&nums[0], n);

	for(int i = 0; i < n; i++)
	{
		if(i != n - 1)
		{
			printf("%d ", nums[i]);
		}
		else
		{
			printf("%d\n", nums[i]);
		}
	}

	return 0;

}

// 从大到小选择排序
void selectionSort(int *nums, int n)
{
	for(int i = 0; i < n; i++)
	{
		int max = nums[i];
		int count = i;

		for(int j = i + 1; j < n; j++)
		{
			if(nums[j] > max)
			{
				count = j;
				max = nums[j];
			}
		}

		nums[count] = nums[i];
		nums[i] = max;
	}
}