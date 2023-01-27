#include <stdio.h>

int main()
{
	int c;

	printf("Input\tEOF\n");

	while ((c = getchar()) != EOF)
	{
		putchar(c);
		printf("\t%d\n", EOF);
	}

	putchar(c);
	printf("\n\t%d\n", EOF);

	return 0;
}
