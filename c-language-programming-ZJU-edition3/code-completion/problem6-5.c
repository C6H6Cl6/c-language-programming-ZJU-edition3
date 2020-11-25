#include <stdio.h>
#include <math.h>

int prime( int p );
void Goldbach( int n );

int main()
{
    int m, n, i, cnt;

    scanf("%d %d", &m, &n);
    if ( prime(m) != 0 ) printf("%d is a prime number\n", m);
    if ( m < 6 ) m = 6;
    if ( m%2 ) m++;
    cnt = 0;
    for( i=m; i<=n; i+=2 ) {
        Goldbach(i);
        cnt++;
        if ( cnt%5 ) printf(", ");
        else printf("\n");
    }

    return 0;
}

int prime( int p ){
    if(p > 1){
        int i = 2;
        while( i <= p/2){
            if(p % i == 0){
                return 0;
            }
            i++;
        }
        return 1;
    }else{
        return 0;
    }
}

void Goldbach( int n ){
    int i = 3;
    int max = n/2;
    for(i; i <= max; i+=2){
        if(prime(i) && prime(n-i)){
            printf("%d=%d+%d", n, i, n-i);
            break;
        }
    }
}