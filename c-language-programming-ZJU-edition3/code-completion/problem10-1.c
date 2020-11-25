#include <stdio.h>
#include <math.h>

int search( int n );

int main()
{
    int number;

    scanf("%d",&number);
    printf("count=%d\n",search(number));
		
    return 0;
}

int search( int n ){
	int count = 0;
	int i = 11;
	int double_i = i*i;
	
	while(double_i <= n){
		if(double_i%10 == double_i/10%10 || double_i%10 == double_i/100%10 || double_i/10%10 == double_i/100%10){
			count++;
		}
		i++;
		double_i = i*i;
	}
	
	return count;
}