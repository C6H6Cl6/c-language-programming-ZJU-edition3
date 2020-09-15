#include <stdio.h>

// 判断是否是闰年
int isLeap(int year);

int main()
{
	int year;
	int month;
	int day;
	char slash;

	int sum = 0;

	scanf("%d", &year);
	scanf("%c", &slash);
	scanf("%d", &month);
	scanf("%c", &slash);
	scanf("%d", &day);

	for(int i = 1; i < month; i++)
	{
		if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10)
		{
			sum += 31;
		}
		else if(i == 2)
		{
			if(isLeap(year))
			{
				sum += 29;
			}
			else
			{
				sum += 28;
			}
		}
		else
		{
			sum += 30;
		}
	}

	sum += day;

	printf("%d\n", sum);

	return 0;

}

int isLeap(int year)
{
	int result = 0;
	if(year % 4 == 0)
	{
		if(year % 100 != 0)
		{
			result = 1;
		}
	}
	if(year % 400 == 0)
	{
		result = 1;
	}

	return result;
}