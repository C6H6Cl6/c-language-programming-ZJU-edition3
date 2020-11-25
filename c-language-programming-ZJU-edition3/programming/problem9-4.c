#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d", &n);

	char book_name[n][31];
	double book_price[n];

	char max_name[31];
	double max_price;
	char min_name[31];
	double min_price;

	for(int i = 0; i < n; i++)
	{
		scanf("\n");
		gets(book_name[i]);
		scanf("%lf", &book_price[i]);

		if(i == 0)
		{
			strcpy(max_name, book_name[i]);
			max_price = book_price[i];
			strcpy(min_name, book_name[i]);
			min_price = book_price[i];
		}
		else if(i != 0)
		{
			if(book_price[i] > max_price)
			{
				strcpy(max_name, book_name[i]);
				max_price = book_price[i];
			}

			if(book_price[i] < min_price)
			{
				strcpy(min_name, book_name[i]);
				min_price = book_price[i];
			}
			
		}

	}

	printf("%.2lf, ", max_price);
	puts(max_name);
	printf("%.2lf, ", min_price);
	puts(min_name);

	return 0;
}