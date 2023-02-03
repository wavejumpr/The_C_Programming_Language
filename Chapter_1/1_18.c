#include <stdio.h>

#define MAXLINE 5

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
	int c, i, trail;

	i = trail = 0;
	while ((c = getchar()) != EOF && c != '\n')
	{
		if (c == ' ' || c == '\t')
			++trail;
		else 
			trail = 0;

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

	i = i - trail;
	if (c == '\n' && i < lim-1)
	{
		s[i] = c;
		++i;
	}
	
	if (s[0] != '\n')
		s[i] = '\0';
	else
		s[0] = '\0';
	
	return i;
}

void copy(char to[], char from[])
{
	int i;

	for (i = 0; (to[i] = from[i]) != '\0'; ++i)
		;
}
