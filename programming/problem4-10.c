#include <stdio.h>

int main(){
	int n = 0;
	scanf("%d", &n);
	int sum = 1;

	for(int i = 1; i < n; i++)
	{
		sum = (sum + 1) * 2;
	}

	printf("%d\n", sum);

	return 0;
}