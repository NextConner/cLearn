#include <stdio.h>
#define STREND '\0'

//拷贝t 前n个字符
void strcp(char *s, char *t, int n);

//比较t 前n个字符
int strcmp(char *s, char *t, int n);

//拼接t 前n个字符
void strcat(char *s, char *t, int n);

//字符反转
void strreserve(char *s);

//计算以t字符结尾的s字符中，t子串的位置
int strend(char *s, char *t);

main()
{

	char *scp;
	char *tcp = "World";
	strcp(scp, tcp, 3);
	// tcp--;
	// *tcp = "1";
	printf("strcp :%s \n", scp);

	char *scmp = "bello";
	char *tcmp = "bd";
	printf("%d \n", strcmp(scmp, tcmp, 3));

	char cparr[20] = "Hello";
	char *cparrpoi = cparr;
	strcat(cparrpoi, tcp, 3);
	printf("%s \n", cparrpoi);

	// char cr[20];
	// strreserve(cr);

	char a[] = "hello";
	char b[] = "lol";
	char c[] = "lo";
	printf("%d\n", strend(&c, &b));
	printf("%d\n", strend(&b, &c));
}

void strcp(char *s, char *t, int n)
{

	while (n-- >= 1)
	{
		*s++ = *t++;
	}
}

int strcmp(char *s, char *t, int n)
{
	for (; *s == *t && n > 0; n--, s++, t++)
		if (*s == '\0')
			return 0;
	return *s - *t;
}

//等于是往第一个字符数组写，数组长度不够会有野指针
void strcat(char *s, char *t, int n)
{

	while (*s++ != STREND)
		;

	s--;
	while ((*s++ = *t++) != STREND && --n > 0)
		;
}

void strreserve(char *s)
{
	int c;
	int total = 0;
	while ((c = getchar()) != ';')
	{
		*s++ = c;
		total++;
	}
	while (total-- > 0)
	{
		printf("%c", *--s);
	}
}

int strend(char *s, char *t)
{

	if (*s == *t && *t == '\0')
	{
		return -1;
	}

	if (*s == *t)
	{
		if (*s++ == *t++ && *t++ == '\0' && *s++ == '\0')
		{
			return 1;
		}
		return strend(s, t);
	}
	else
	{
		*s++;
		return strend(s, t);
	}
	return -1;
}