#include <stdio.h>

int main()
{
	int m, n;
	scanf("%d", &m);

	int nums1[m];

	for(int i = 0; i < m; i++)
	{
		scanf("%d", &nums1[i]);
	}

	scanf("%d", &n);

	int nums2[n];

	for(int i = 0; i < n; i++)
	{
		scanf("%d", &nums2[i]);
	}

	int result[m + n];
	int count = -1;

	for(int i = 0; i < m; i++)
	{
		int flag = 0;
		for(int j = 0; j < n; j++)
		{
			if(nums1[i] == nums2[j])
			{
				flag = 1;
				break;
			}
		}

		if(flag == 0)
		{
			int has_number = 0;
			for(int j = 0; j < i; j++)
			{
				if(nums1[j] == nums1[i])
				{
					has_number = 1;
				}
			}
			if(has_number == 0)
			{
				count++;
				result[count] = nums1[i];
			}
		}
	}

	for(int i = 0; i < n; i++)
	{
		int flag = 0;
		for(int j = 0; j < n; j++)
		{
			if(nums2[i] == nums1[j])
			{
				flag = 1;
				break;
			}
		}

		if(flag == 0)
		{
			int has_number = 0;
			for(int j = 0; j < i; j++)
			{
				if(nums2[j] == nums2[i])
				{
					has_number = 1;
				}
			}
			if(has_number == 0)
			{
				count++;
				result[count] = nums2[i];
			}
		}
	}

	for(int i = 0; i <= count; i++)
	{
		if(i == count)
		{
			printf("%d\n", result[i]);
		}
		else
		{
			printf("%d ", result[i]);
		}
	}

	return 0;


}