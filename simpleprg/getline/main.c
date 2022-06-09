#include <stdio.h>
#include <string.h>

static int count = 0;

void print(char *buf[30]);
void strcop(char *s, char *t);
void rewordfrinp(char *buf[30], int c);

int main(int argc, char *argv[])
{
	char *buf[30];
	int c;
	int i = 0;
	while (--argc > 0 && (*++argv)[0] == '-')
	{
		c = *++argv[0] - '0';
		printf("run times : %d \n", c);
		rewordfrinp(buf, c);
	}

	print(buf);
	return 0;
}

void rewordfrinp(char *buf[30], int llc)
{

	for (int i = 0; i < llc; i++)
	{
		char *ap;
		char arr[30];
		int c;
		int index = 0;
		while ((c = getchar()) != '\n')
		{
			arr[index++] = c;
		}
		arr[index] = '\0';
		ap = arr;
		count++;
		printf("copval: %s \n", ap);
		strcop(*buf++, ap);
	}
}

void print(char *buf[30])
{
	for (int i = 0; i < count; i++)
	{
		printf("re[%d]: %s \n", i, *buf++);
	}
}

void strcop(char *s, char *t)
{
	while ((*s++ = *t++) != '\0')
		;
}
