#include <stdio.h>
#include <string.h>

int main()
{
	char str_vector[5][81];

	for(int i = 0; i < 5; i++)
	{
		scanf("%s", str_vector[i]);
	}

	char temp[81];
	for(int i = 0; i < 5; i++)
	{
		for(int j = i + 1; j < 5; j++)
		{
			if(strcmp(str_vector[i], str_vector[j]) > 0)
			{
				strcpy(temp, str_vector[i]);
				strcpy(str_vector[i], str_vector[j]);
				strcpy(str_vector[j], temp);
			}
		}
	}

	printf("After sorted:\n");

	for(int i = 0; i < 5; i++)
	{
		printf("%s\n", str_vector[i]);
	}

	return 0;

}