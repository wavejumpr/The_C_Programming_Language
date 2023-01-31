#include <stdio.h>

int main()
{
	int c, i, j;
	int ascii[128];

	for (i = 0; i < 128; ++i)
		ascii[i] = 0;

	while ((c = getchar()) != EOF)
		++ascii[c];

	printf("Dec\t Char");
	for (i = 32; i < 127; ++i)	//ommit displaying ASCII 32 to 126. All 128 are still stored in memory)
	{
		printf("\n%d\t%c: ", i, i);
		for (j = 0; j < ascii[i]; ++j)
		{
			putchar('-');
		}
	}

	return 0;
}
