#include <stdio.h>

#define MAXS 10

char *match( char *s, char ch1, char ch2 );

int main()
{
    char str[MAXS], ch_start, ch_end, *p;

    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end);
    printf("%s\n", p);

    return 0;
}

char *match( char *s, char ch1, char ch2 ){
	int i = 0;
	int flag = 0;
	char *start = "";
	
	while(s[i] != '\0'){
		if(ch1 == s[i] && flag == 0){
			start = &s[i];
			flag = 1;
			printf("%c", s[i]);
			i++;
			continue;
		}
		if(ch2 == s[i] && flag == 1){
			printf("%c\n", s[i]);
			return start;
		}
		if('\0' == s[i + 1] && flag == 1){
			printf("%c\n", s[i]);
			return start;
		}
		if(flag == 1){
			printf("%c", s[i]);
		}
		i++;
	}
	
	printf("\n");
	
	return start;
}