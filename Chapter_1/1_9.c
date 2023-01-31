#include <stdio.h>

int main()
{
	int c;
	int ws = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' && ws == 0)
			putchar(c), ++ws;
		else if (c == ' ' && ws != 0)
			;
		else
			putchar(c), ws = 0;
	}

	return 0;
}
