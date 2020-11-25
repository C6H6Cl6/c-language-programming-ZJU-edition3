#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );
	
int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

int fib( int n ){
	if(n == 1 || n == 2){
		return 1;
	}else{
		return fib(n-2) + fib(n-1);
	}
}

void PrintFN( int m, int n ){
	int FN_number = 0;
	int i = 1;
	int j = fib(i);
	while(j <= n){
		if(j >= m){
			FN_number++;
			if(FN_number == 1){
				printf("%d", j);
			}else{
				printf(" %d", j);
			}
		}
		i++;
		j = fib(i);
	}
	
	if(FN_number == 0){
		printf("No Fibonacci number\n");
	}
	else{
		printf("\n");
	}
}