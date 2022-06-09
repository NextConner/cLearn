#include <stdio.h>

#define MAXSIZE 1000
#define END ';'
#define TR '\n'

int count = 0;

void strcop(char *s, char *t);

void rewordfrinp(char *buf[], char arr[])
{
	int c;
	char *ap = arr;
	int index = 0;
	while ((c = getchar()) != TR)
	{
		*ap++ = c;
	}
	char *p;
	strcop(p, arr);
	printf("%s \n", p);
	*buf++ = p;
}

void print(char *buf[])
{
	for (int i = 0; i < count; i++)
	{
		printf("%s \n", *buf++);
	}
}

void strcop(char *s, char *t)
{
	while (*s++ = *t++)
		;
}