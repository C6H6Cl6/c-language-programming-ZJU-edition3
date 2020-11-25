#include <stdio.h>
#define MAXN 10

int ArrayShift( int a[], int n, int m );

int main()
{
    int a[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    for ( i = 0; i < n; i++ ) scanf("%d", &a[i]);

    ArrayShift(a, n, m);

    for ( i = 0; i < n; i++ ) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}

int ArrayShift( int a[], int n, int m ){
    int i = 1;
    if(m > 0){
        for(i; i <= m; i++){
            int tail = a[n-1];
            int j = 0;
            for(j; j < n; j++){
                a[n - j - 1] = a[n - j - 2];
            }
            a[0] = tail;
        }
    }
    return 0;
}