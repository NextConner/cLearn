#include <stdio.h>

static int count = 0;

int main(int argc, char const *argv[])
{

	char *buf[100];

	int c;
	int index = 0;
	char *ap;
	char a[100];
	while ((c = getchar()) != ';')
	{
		a[index++] = c;
	}
	ap = a;
	// add(buf);
	buf[count++] = ap;
	pr(buf);
	return 0;
}

void add(char *buf[])
{
	char *a = "hello";
	char *b = "world";
	buf[count++] = a;
	buf[count++] = b;
}

void pr(char *buf[])
{
	for (int i = 0; i < count; i++)
	{
		printf("%s \n", buf[i]);
	}
}