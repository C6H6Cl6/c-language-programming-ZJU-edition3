#include <stdio.h>

void pyramid( int n );

int main()
{    
    int n;

    scanf("%d", &n);
    pyramid(n);

    return 0;
}

void pyramid(int n){
	int i = 1;
	for(i; i <= n; i++){
		int j = n - i;
		for(j; j>0; j--){
			printf(" ");
		}
		int k = i;
		for(k; k > 0; k--){
			printf("%d ", i);
		}
		printf("\n");
	}
}