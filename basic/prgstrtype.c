#include <stdio.h>

//输入字符转整数
int atoi(char[]);
//输入字符转小数
double atof(char[]);

main()
{
	char *sc = "102";
	char *sf = "203.31234";
	printf("%d\n", sc);
	printf("%d\n", atoi(sc));
	printf("%g\n", atof(sf));
	char *sccc = "1011";
	printf("%d", atoi2(sccc, 0));
}

//字符转整数，循环版本
int atoi(char *ca)
{
	int n = 0;
	while (*ca != '\0')
	{
		n = n * 10 + (*ca++ - '0');
	}
	return n;
}

//递归版本
int atoi2(char *ca, int n)
{

	if (*ca == '\0')
	{
		return n;
	}
	else
	{
		n = n * 10 + (*ca++ - '0');
		return atoi2(ca, n);
	}
}

//字符数组转双精度浮点
double atof(char *ca)
{

	double n = 0;
	double power = 0;
	double isp = -1;
	while (*ca != '\0')
	{
		if (*ca == '.')
		{
			isp = 0.1;
			ca++;
			continue;
		}
		else if (*ca < '0' || *ca > '9')
		{
			return 0;
		}

		if (isp < 0)
		{
			n = n * 10.0 + (*ca++ - '0');
		}
		else
		{
			//小数
			power = power + isp * (*ca++ - '0');
			isp *= 0.1;
		}
	}
	double rest = n + power;
	return rest;
}