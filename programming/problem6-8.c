#include <stdio.h>

int main()
{
	char input = '0';
	int word_number = 0;
	char last = ' ';

	while(input != '\n')
	{
		scanf("%c", &input);
		if(input == '\n')
		{
			break;
		}
		else if(input != ' ')
		{
			if(last == ' ')
			{
				word_number++;
				last = 'a';
			}
		}
		else if(input == ' ')
		{
			last = ' ';
		}
	}

	printf("%d\n", word_number);


	return 0;
}