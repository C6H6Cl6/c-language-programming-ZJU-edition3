#include <stdio.h>
#define MAXS 15

void StringCount( char s[] );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

void StringCount( char s[] ){
	int i = 0;
	int letter_count = 0;
	int blank_count = 0;
	int digit_count = 0;
	int other_count = 0;
	while(s[i] != 0){
		if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122)){
			letter_count++;
			i++;
		}else if(s[i]==10||s[i]==32){
			blank_count++;
			i++;
		}else if(s[i]>=48&&s[i]<=57){
			digit_count++;
			i++;
		}else{
			other_count++;
			i++;
		}
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d", letter_count, blank_count, digit_count, other_count);
}