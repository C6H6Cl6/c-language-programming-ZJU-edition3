#include <stdio.h>

int fn( int a, int n );
int SumA( int a, int n );
	
int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a,n));		
    printf("s = %d\n", SumA(a,n));	
	
    return 0;
}

int fn( int a, int n ){
	int result = a;
	int i = 2;
	while(i <= n){
		result = result*10 + a;
		i++;
	}
	
	return result;
}

int SumA( int a, int n ){
	int result = 0;
	int i = 1;
	for(i; i <= n; i++){
		result += fn(a, i);
	}
	
	return result;
}