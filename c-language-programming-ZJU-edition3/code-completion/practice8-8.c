#include <stdio.h>
#include <string.h>

#define MAXS 10

void Shift( char s[] );

void GetString( char s[] ); /* 实现细节在此不表 */

int main()
{
    char s[MAXS];

    GetString(s);
    Shift(s);
    printf("%s\n", s);
	
    return 0; 
}

void Shift( char s[] ){
	char first = s[0];
	char second = s[1];
	char third = s[2];
	
	int s_length = strlen(s);
	int i = 3;
	for(i; i < s_length; i++){
		s[i-3] = s[i];
	}
	s[s_length-3] = first;
	s[s_length-2] = second;
	s[s_length-1] = third;
}