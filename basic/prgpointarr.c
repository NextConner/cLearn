#include <stdio.h>

int main(int argc, char const *argv[])
{

	char *buf[100];
	char *bufp = buf;

	// int c;
	// int count = 0;
	// while ((c = getchar()) != ';')
	// {
	// 	char a[100];
	// 	char *ap = a;
	// 	*bufp++ = c;
	// }
	add(buf);
	pr(buf);
	return 0;
}

void add(char *buf[])
{
	char *a = "hello";
	char *b = "world";
	buf[0] = a;
	buf[1] = b;
}

void pr(char *buf[])
{
	printf("%s \n", buf[0]);
	printf("%s \n", buf[1]);
}