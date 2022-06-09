#include <stdio.h>

int main(int argc, char **argv)
{
	char *cp = *argv;
	while (--argc > 0)
	{
		//  && (*++argv)[0] == '-'
		printf("arg: %s \n", *cp++);
	}
	return 0;
}