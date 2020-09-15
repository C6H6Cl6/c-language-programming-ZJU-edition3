#include <stdio.h>

int main()
{
	int numberList[3];
	for(int i = 0; i < 3; i++)
	{
		scanf("%d", &numberList[i]);
	}

	for(int i = 0; i < 3; i++)
	{
		for(int j = i + 1; j < 3; j++)
		{
			if(numberList[i] > numberList[j])
			{
				int temp = numberList[i];
				numberList[i] = numberList[j];
				numberList[j] = temp;
			}
		}
	}

	printf("%d->%d->%d\n", numberList[0], numberList[1], numberList[2]);

	return 0;
}