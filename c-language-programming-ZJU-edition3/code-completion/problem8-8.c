#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum {false, true} bool;

bool palindrome( char *s );

int main()
{
    char s[MAXN];

    scanf("%s", s);
    if ( palindrome(s)==true )
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}

bool palindrome( char *s ){
	int str_len = strlen(s);
	int i = 0;
	int half = str_len/2;
	
	for(i; i <= half; i++){
		if(s[i] != s[str_len - i - 1]){
			return false;
		}
	}
	
	return true;
}