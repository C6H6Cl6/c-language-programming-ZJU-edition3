#include <stdio.h>

void printdigits( int n );

int main()
{
    int n;
	
    scanf("%d", &n);
    printdigits(n);

    return 0;
}

void printdigits( int n ){
	if(n == 0){
		printf("%d\n", 0);
	}
	if(n/10 == 0 && n != 0){
		printf("%d\n", n%10);
	}
	if(n/10 != 0){
		printdigits( n / 10 );
		printf("%d\n", n%10);
		
	}
} 
