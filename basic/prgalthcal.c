#include <stdio.h>

//无括号的四则运算
void main(int argc, char *argv[])
{
	int arg[10];
	int numindex = 0;
	int i;
	int c;
	//四则运算符
	int ops = '+' | '-' | '*' | '/';
	while (--argc > 0 && (*++argv)[0] == '-')
	{
		while (c = *++argv[0])
		{
			int n1;
			int n2;
			if ((c & ops) == c)
			{
				n1 = arg[--numindex];
				n2 = arg[--numindex];
			}
			switch (c)
			{
			case '+':
				arg[numindex++] = n1 + n2;
				break;
			case '-':
				arg[numindex++] = n2 - n1;
				break;
			case '*':
				arg[numindex++] = n1 * n2;
				break;
			case '/':
				arg[numindex++] = n2 / n1;
				break;
			default:
				if (c >= '0' && c <= '9')
				{
					arg[numindex++] = c - '0';
				}
				break;
			}
		}
	}
	printf("%d \n", arg[numindex - 1]);
}