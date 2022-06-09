#include <stdio.h>

int main()
{
	FILE *fd = fopen("../tail/main.c", "r");
	int c;
	while ((c = getc(fd)) != EOF)
	{
		putchar(c);
	}
	fclose(fd);
	return 0;
}