#include <stdio.h>

#define MAXSIZE 10000

// static 不对外开放访问
static char buf[MAXSIZE];
static char *bufpoi = buf;

char *molloc(int n);
void free(char *freepoi);

int main(int argc, char const *argv[])
{

	return 0;
}

//分配n大小的存储
char *molloc(int n)
{
	//数组容量减去当前已分配指针位置
	if (buf + MAXSIZE - bufpoi > n)
	{
		bufpoi += n;
	}
	return bufpoi - n;
}

void free(char *freepoi)
{
	if (freepoi > buf && freepoi < buf + MAXSIZE)
	{
		bufpoi = freepoi;
	}
}