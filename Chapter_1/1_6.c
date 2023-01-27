#include <stdio.h>

int main()
{
	int c;

	printf("Input\tgetchar() != EOF\n");

	while ((c = getchar()) != EOF)
	{
		putchar(c);
		printf("\tTRUE\n");
	}

	putchar(c);
	printf("\n\tFALSE\n");

	return 0;
}
