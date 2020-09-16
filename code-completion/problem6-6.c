#include <stdio.h>

int reverse( int number );

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

int reverse( int number ){
	while(number != 0 && number % 10 == 0){
		number /= 10;
	}
	
	int input_number = number;
	int i = 1;
	int result = 0;
	do{
		result = result*10 + number%10;
		i *= 10;
		number /= 10;
	}while(number != 0 );
	
	return result;
	
}