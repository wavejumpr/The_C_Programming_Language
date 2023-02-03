#include <stdio.h>

#define MAXLINE 10

int gline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = gline(line, MAXLINE)) > 0)
		if (len > max)
		{
			max = len;
			copy(longest, line);
		}
	if (max > 0)
		printf("\nLongest line length: %d\nLongest line: %s", max, longest);
	
	return 0;
}

int gline(char s[], int lim)
{
	int c, i;

	i = 0;
	while ((c = getchar()) != EOF && c != '\n')
	{
		if (i < lim-1)
		{
			s[i] = c;
			++i;
		}
		else
		{
			++i;
		}
	}
	if (c == '\n' && i < lim-1)
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[])
{
	int i;

	for (i = 0; (to[i] = from[i]) != '\0'; ++i)
		;
}
