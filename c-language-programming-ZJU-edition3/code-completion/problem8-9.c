#include <stdio.h>
#define MAXS 15

void StringCount( char *s );
void ReadString( char *s ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

void StringCount( char *s ){
	int up = 0;
	int low = 0;
	int blank = 0;
	int number = 0;
	int other = 0;
	
	int i = 0;
	int len = strlen(s);
	
	while(s[i] != '\0'){
		if(s[i] >= 65 && s[i] <= 90){
			up++;
		}else if(s[i] >= 97 && s[i] <= 122){
			low++;
		}else if(s[i] == 32){
			blank++;
		}else if(s[i] >= 48 && s[i] <= 57){
			number++;
		}else{
			other++;
		}
		i++;
	}
	
	printf("%d %d %d %d %d\n", up, low, blank, number, other);
	
}