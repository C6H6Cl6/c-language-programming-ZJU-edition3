#include <stdio.h>
#include <math.h>

int main()
{
	int hex_numbers[50];
	int count = 0;

	int isminu = 0;

	int hasnum = 0;

	char input;
	scanf("%c", &input);

	while(input != '#')
	{
		if(input == '-' && hasnum == 0)
		{
			isminu = 1;
		}

		if(input >= '0' && input <= '9')
		{
			hex_numbers[count] = input - 48;
			hasnum = 1;
			count++;
		}

		if(input >= 'A' && input <= 'F')
		{
			hex_numbers[count] = input - 55;
			hasnum = 1;
			count++;
		}

		if(input >= 'a' && input <= 'f')
		{
			hex_numbers[count] = input - 87;
			hasnum = 1;
			count++;
		}

		scanf("%c", &input);
	}

	double sum = 0;
	int temp_count = count - 1;

	for(int i = 0; i < count; i++)
	{
		sum += hex_numbers[temp_count] * pow(16, i);
		temp_count--;
	}

	if(sum != 0)
	{
		if(isminu == 1)
		{
			printf("-");
		}
	}

	printf("%.0f\n", sum);

	return 0;

}