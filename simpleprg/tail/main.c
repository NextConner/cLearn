#include "tail.c"

//从 -n2 -sA 模式下，在有限次(默认10)的输入中，查找 2行匹配字符A 的输入行
int main(int argc, char *argv[])
{

	char *mem[100];
	int n;
	char ac[20];
	char *match = ac;
	int index = 0;
	int c;

	while (--argc > 0 && (*++argv)[0] == '-')
	{
		while (c = *++argv[0])
		{
			if (c == 'n')
			{
				c = *++argv[0];
				n = c - '0';
				printf("n= %d \n", n);
			}
			else if (c == 's')
			{
				while ((c = *++argv[0]) != '\0')
				{
					// printf("c= %c \n", c);
					ac[index++] = c;
				}
				//防止字符乱码
				ac[index] = '\0';
				break;
			}
		}
	}

	printf("find:%d ,match:%s \n", n, match);
	saveinput(mem, match, n);

	print(mem, n);

	return 0;
}