#include <stdio.h>

int main()
{
	int c, i, j, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;
	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;

	while ((c = getchar()) != EOF)
		if (c >= '0' && c <= '9')
			++ndigit[c-'0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;

	for (i = 0; i < 10; ++i)
	{
		printf("\nNumber of %ds:\t", i);
		for (j = 0; j < ndigit[i]; ++j)
			putchar('-');
	}
	printf("\n\nNumber of white spaces = %d\nNumber of other symbols and letters  = %d\n", nwhite, nother);

	return 0;
}
