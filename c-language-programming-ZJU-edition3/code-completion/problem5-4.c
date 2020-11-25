#include <stdio.h>
#include <math.h>

int prime( int p );
int PrimeSum( int m, int n );

int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}

int prime( int p ){
	if(p >= 2){
		int i = 2;
		int halfOfP = p/2;
		
		for(i; i <= halfOfP; i++){
			if(p % i == 0){
				return 0;
			}
		}
		
		return 1;
	}
	else {
		return 0;	
	}
}

int PrimeSum( int m, int n ){
	int result = 0;
	int i = m;
	for(i; i <= n; i++){
		if(prime(i)){
			result += i;
		}
	}
	
	return result;
}