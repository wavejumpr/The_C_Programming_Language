#include <stdio.h>

#define MAXLINE 1000

int gline(char line[], int maxline);

int main()
{
	int len;
	char line[MAXLINE];

	while ((len = gline(line, MAXLINE)) > 0)
	{
		if (len > 80)
		{
			printf("Line is longer than 80 characters: %s\n", line);
		}
		else
		{
			printf("Line is less then 80 characters\n");
		}
	}
	return 0;
}

int gline(char s[], int lim)
{
	int c, i;

	for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
