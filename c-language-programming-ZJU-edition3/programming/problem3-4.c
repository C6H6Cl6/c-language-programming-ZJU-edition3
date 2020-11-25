#include <stdio.h>

int main()
{
	int n;
	int mark;

	int a_level = 0;
	int b_level = 0;
	int c_level = 0;
	int d_level = 0;
	int e_level = 0;

	scanf("%d", &n);

	for(int i = 0; i < n; i++)
	{
		scanf("%d", &mark);

		if(mark >= 90)
		{
			a_level++;
		}
		else if(mark >= 80)
		{
			b_level++;
		}
		else if(mark >= 70)
		{
			c_level++;
		}
		else if(mark >= 60)
		{
			d_level++;
		}
		else
		{
			e_level++;
		}
	}

	printf("%d %d %d %d %d\n", a_level, b_level, c_level, d_level, e_level);

	return 0;
}