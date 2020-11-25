#include <stdio.h>

void dectobin( int n );

int main()
{
    int n;

    scanf("%d", &n);
    dectobin(n);

    return 0;
}

void dectobin( int n ){
	if(n == 0){
		printf("%d", 0);
	}
	if(n%2 == 0 && n != 0){
		if(n/2 != 0){
			dectobin(n/2);
		}
		printf("%d", 0);
	}
	if(n%2 == 1){
		if(n/2 != 0){
			dectobin(n/2);
		}
		printf("%d", 1);
	}
}