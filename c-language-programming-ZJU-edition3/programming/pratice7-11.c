#include <stdio.h>

int main()
{
	char str[80];

	int count = 0;

	scanf("%c", &str[count]);
	while(str[count] != '\n')
	{
		count++;
		scanf("%c", &str[count]);
	}

	for(int i = count - 1; i >= 0; i--)
	{
		printf("%c", str[i]);
	}

	printf("\n");

	return 0;
}