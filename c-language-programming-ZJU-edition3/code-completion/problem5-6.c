#include <stdio.h>

int narcissistic( int number );
void PrintN( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}

int narcissistic( int number ){
	int input_number = number;
	int numbers[5] = {0, 0, 0, 0, 0};
	int result = 0;
	
	int i = 0;
	while(number > 0){
		numbers[i] = number % 10;
		number /= 10;
		i++;
	}
	if(i == 3){
		int j = 0;
		for(j; j < i; j++){
			result += numbers[j]*numbers[j]*numbers[j];
		}
	}else if(i == 4){
		int j = 0;
		for(j; j < i; j++){
			result += numbers[j]*numbers[j]*numbers[j]*numbers[j];
		}
	}else{
		return 0;
	}
	
	if(result == input_number){
		return 1;
	}else {
		return 0;	
	}
	
}

void PrintN( int m, int n ){
	int current_number = m + 1;
	for(current_number; current_number < n; current_number++){
		if(narcissistic(current_number)){
			printf("%d\n", current_number);
		}
	}
	
}