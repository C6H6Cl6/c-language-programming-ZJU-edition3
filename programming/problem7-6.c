#include <stdio.h>

int main()
{
	int count = 0;

	char word;

	scanf("%c", &word);

	while(word != '\n')
	{
		if(word >= 'B' && word <= 'Z')
		{
			if(word != 'E' && word != 'I' && word != 'O' && word != 'U')
			{
				count++;
			}
		}

		scanf("%c", &word);
	}

	printf("%d\n", count);

	return 0;
}