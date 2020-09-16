#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

double factorial(int input){
	double result = 1;
	if(input > 1){
		int i = 2;
		for(i; i<= input; i++){
			result *= i;
		}
		return result;
	}else{
		return 1;
	}

}
double funcos( double e, double x ){
	double result = 0;
	int i = 0;
	while(pow(x,i*2)/factorial(i*2) >= e){
		result += pow(-1.0, i)*pow(x,i*2)/factorial(i*2);
		i++;
	}
	result += pow(-1.0, i)*pow(x,i*2)/factorial(i*2);
	return result;
}