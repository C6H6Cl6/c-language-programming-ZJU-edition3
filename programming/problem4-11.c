#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	int total = 1;
	int young1 = 1;
	int young2 = 0;
	int old = 0;

	int mounth = 1;
	int temp = 0;

	while(total < n)
	{
		old += young2;
		temp = old;
		young2 = young1;
		young1 = temp;

		total += temp;
		mounth++;
	}

	printf("%d\n", mounth);

	return 0;

}