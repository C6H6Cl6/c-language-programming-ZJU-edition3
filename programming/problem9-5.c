#include <stdio.h>

typedef struct Contact
{
	char name[30];
	long int date;
	char phone_number[30];
}Contact;

int main()
{
	int n; 
	scanf("%d", &n);
	Contact contacts[n], temp;

	for(int i = 0; i < n; i++)
	{
		scanf("%s %ld %s", contacts[i].name, &contacts[i].date, contacts[i].phone_number);
	}

	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(contacts[i].date > contacts[j].date)
			{
				temp = contacts[i];
				contacts[i] = contacts[j];
				contacts[j] = temp;
			}
		}
	}

	for(int i = 0; i < n; i++)
	{
		printf("%s %ld %s\n", contacts[i].name, contacts[i].date, contacts[i].phone_number);
	}

	return 0;


}