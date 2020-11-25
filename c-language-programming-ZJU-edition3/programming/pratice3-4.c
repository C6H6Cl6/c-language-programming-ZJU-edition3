#include <stdio.h>
#include <stdlib.h>

int main()
{
	int letter = 0;
	int blank = 0;
	int digit = 0;
	int other = 0;

	for(int i = 1; i<= 10; i++)
	{
		char c;
		// scanf("%c", &c);
		c = getchar();
		if((c >= 65 && c <= 90)||(c >= 97 && c<= 122))
		{
			letter++;
		}
		else if(c == ' ' || c == '\n')
		{
			blank++;
		}
		else if(c >= 48 && c <= 57) 
		{
			digit++;
		}
		else
		{
			other++;
		}
	}

	printf("letter = %d, blank = %d, digit = %d, other = %d\n", letter, blank, digit, other);

	return 0;
}