#include <stdio.h>
#define MAXN 20

void CountOff( int n, int m, int out[] );

int main()
{
    int out[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    CountOff( n, m, out );   
    for ( i = 0; i < n; i++ )
        printf("%d ", out[i]);
    printf("\n");

    return 0;
}

void CountOff( int n, int m, int out[] ){
	int i = 0;
	for(i; i < n; i++){
		out[i] = 0;
	}
	
	int out_number = 1;
	int current_people = 1;
	while(out_number <= n){
		int count = 1;
		
		while(count <= m){
			if(out[current_people - 1] == 0){
				if(count == m){
					out[current_people-1] = out_number;
					count++;
					current_people++;
				}else{
					count++;
					current_people++;
				}
			}else{
				current_people++;
			}
			if(current_people == n + 1){
				current_people = 1;
			}
		}
		out_number++;
	}
}