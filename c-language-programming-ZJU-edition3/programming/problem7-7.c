#include <stdio.h>

int main()
{
	char word;
	scanf("%c", &word);

	while(word != '\n')
	{
		switch(word)
		{
			case 'A': printf("Z");break;
			case 'B': printf("Y");break;
			case 'C': printf("X");break;
			case 'D': printf("W");break;
			case 'E': printf("V");break;
			case 'F': printf("U");break;
			case 'G': printf("T");break;
			case 'H': printf("S");break;
			case 'I': printf("R");break;
			case 'J': printf("Q");break;
			case 'K': printf("P");break;
			case 'L': printf("O");break;
			case 'M': printf("N");break;
			case 'N': printf("M");break;
			case 'O': printf("L");break;
			case 'P': printf("K");break;
			case 'Q': printf("J");break;
			case 'R': printf("I");break;
			case 'S': printf("H");break;
			case 'T': printf("G");break;
			case 'U': printf("F");break;
			case 'V': printf("E");break;
			case 'W': printf("D");break;
			case 'X': printf("C");break;
			case 'Y': printf("B");break;
			case 'Z': printf("A");break;
			default: printf("%c", word);
		}

		scanf("%c", &word);
	}

	printf("\n");
	return 0;
}