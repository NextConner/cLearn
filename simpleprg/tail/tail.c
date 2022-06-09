#include <stdio.h>
#include "../../basic/prgstr.c"

#define END ';'
#define TR '\n'
#define MAXSIZE 100
#define swap(t, x, y) \
	t temp = y;         \
	y = x;              \
	x = temp;

void strcopy(char *s, char *t);
void print(char arr[100][100], int lc);

//存储符合查找模式 match 的最后n行
int saveinput(char arr[100][100], char *match, int n);

int saveinput(char arr[100][100], char *match, int n)
{

	int lc = 0;
	int i;
	for (i = 0; i < 10; i++)
	{
		int c;
		char temparr[100];

		int index = 0;
		char *em;

		strcopy(em, match);

		while ((c = getchar()) != END)
		{

			if (n <= 0)
			{
				return;
			}
			//非换行
			if (c != TR)
			{
				temparr[index++] = c;
			}
			else
			{
				temparr[index] = '\0';
				char *tempp = temparr;
				index = 0;
				printf("curarr: %s \n", tempp);
				int ismatch = strmatch(tempp, match);
				if (ismatch > 0)
				{
					printf("match: %s \n", temparr);
					strcopy(*arr++, tempp);
					n--;
				}
			}
		}
	}

	return lc;
}

void print(char arr[100][100], int lc)
{
	for (int i = 0; i < lc; i++)
	{
		printf("re[%d]: %s \n", i, arr[i]);
	}
}

void strcopy(char *s, char *t)
{
	while (*s++ = *t++)
		;
}