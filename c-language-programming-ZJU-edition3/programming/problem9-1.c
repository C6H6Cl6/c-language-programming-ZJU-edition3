#include <stdio.h>

int main()
{
	int hour;
	int minute;
	int second;

	char ch;

	int second_add;

	scanf("%d", &hour);
	scanf("%c", &ch);
	scanf("%d", &minute);
	scanf("%c", &ch);
	scanf("%d", &second);

	scanf("%d", &second_add);

	second += second_add;
	if(second >= 60)
	{
		second -= 60;
		minute += 1;
		if(minute >= 60)
		{
			minute -= 60;
			hour += 1;
			if(hour >= 24)
			{
				hour -= 24;
			}
		}
	}

	printf("%02d:%02d:%02d\n", hour, minute, second);

	return 0;
}