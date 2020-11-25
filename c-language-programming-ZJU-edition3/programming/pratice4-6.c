#include <stdio.h>

int main()
{
	int number;
	int N;

	scanf("%d %d", &number, &N);

	int count = 1;
	int guess = 0;

	scanf("%d", &guess);

	while(count <= N && guess >= 0)
	{
		if(guess < number)
		{
			printf("Too small\n");
		}
		else if(guess > number)
		{
			printf("Too big\n");
		}
		else
		{
			if(count == 1)
			{
				printf("Bingo!\n");
				return 0;
			}
			else if(count <= 3)
			{
				printf("Lucky You!\n");
				return 0;
			}
			else if(count <= N)
			{
				printf("Good Guess!\n");
				return 0;
			}

		}
		
		scanf("%d", &guess);
		count++;
	}

	printf("Game Over\n");

	return 0;
}