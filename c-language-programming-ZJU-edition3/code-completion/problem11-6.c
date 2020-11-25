#include <stdio.h>
#define MAXS 30

char *search(char *s, char *t);
void ReadString( char s[] ); /* 裁判提供，细节不表 */

int main()
{
    char s[MAXS], t[MAXS], *pos;

    ReadString(s);
    ReadString(t);
    pos = search(s, t);
    if ( pos != NULL )
        printf("%d\n", pos - s);
    else
        printf("-1\n");

    return 0;
}

char *search(char *s, char *t)
{
	int i = 0;
	int t_length = 0;
	char *p = NULL;
	
	while(t[t_length] != '\0')
	{
		t_length++;
	}
	
	while(s[i] != '\0')
	{
		int t_number = 0;
		while(t[t_number] != '\0'){
			if(s[i + t_number] == t[t_number])
			{
				t_number++;
			}
			else
			{
				break;
			}
		}
		
		if(t_number == t_length)
		{
			p = &s[i];
			return p;
		}
		else
		{
			i++;
		}
	}
	
	return p;
}