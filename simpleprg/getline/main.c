#include <stdio.h>
#include <string.h>

static int count = 0;

void print(char *buf[100]);
void strcop(char *s, char *t);
void rewordfrinp(char *buf[], char *ap);

int main(int argc, char *argv[])
{
	char *buf[100];
	int c;
	while (--argc > 0 && (*++argv)[0] == '-')
	{
		c = *++argv[0] - '0';
		while (c-- > 0)
		{
			char *p;
			rewordfrinp(buf, p);
			char *q;
			strcop(q, p);
			buf[count++] = q;
		}
	}
	print(buf);
	return 0;
}

void rewordfrinp(char *buf[], char *ap)
{
	int c;
	char *arp, arr[20];
	int index = 0;
	while ((c = getchar()) != '\n')
	{
		arr[index++] = c;
	}
	arr[index] = '\0';
	arp = arr;
	strcop(ap, arp);
}

void print(char *buf[])
{
	printf("re: %s \n", buf[0]);
	printf("re: %s \n", buf[1]);
	for (int i = 0; i < count; i++)
	{
		printf("re: %s \n", buf[i]);
	}
}

void strcop(char *s, char *t)
{
	while ((*s++ = *t++) != '\0')
		;
}
