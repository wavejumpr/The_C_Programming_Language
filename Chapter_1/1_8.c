#include <stdio.h>

int main()
{
	int c, nl, nt, nws, nc;

	nl = nt = nws = nc = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
			++nl;
		else if (c == ' ')
			++nws;
		else if (c == '\t')
			++nt;
		else
			++nc;
	}

	printf("\nNumber of characters:\t%d", nc);
	printf("\nNumber of white spaces:\t%d", nws);
	printf("\nNumber of tabs:\t\t%d", nt);
	printf("\nNumber of lines:\t%d", nl);

	return 0;
}
