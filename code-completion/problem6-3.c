#include <stdio.h>

int factorsum( int number );
void PrintPN( int m, int n );
	
int main()
{
    int i, m, n;

    scanf("%d %d", &m, &n);
    if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
    if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}

int factorsum( int number ){
	int result = 1;
	int i = 2;
	while(i <= number/2){
		if(number%i == 0){
			result += i;
		}
		i++;
	}
	return result;
}

void PrintPN( int m, int n ){
	int PN_number = 0;
	int i = m;
	for(i; i <= n; i++){
		if(i == factorsum(i)){
			PN_number++;
			printf("%d = 1", i);
			int j = 2;
			for(j; j <= i/2; j++){
				if(i % j == 0){
					printf(" + %d", j);
				}
			}
			printf("\n");
		}
	}
	if(PN_number == 0){
		printf("No perfect number\n");
	}
}