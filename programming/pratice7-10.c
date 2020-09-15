#include <stdio.h>

int main()
{
	char aim;
	char input;

	int index = -1;


	scanf("%c", &aim);
	// 读取一个回车
	scanf("%c", &input);
	scanf("%c", &input);
	int count = 0;
	while(input != '\n')
	{
		if(input == aim)
		{
			index = count;
		}
		count++;
		scanf("%c", &input);
	}

	if(index == -1)
	{
		printf("Not Found\n");
	}
	else
	{
		printf("index = %d\n", index);
	}

	return 0;

}