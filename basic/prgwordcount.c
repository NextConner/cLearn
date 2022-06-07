#include <stdio.h>

#define IN 1
#define OUT 0

static int str[26];
//统计字符数,以数组下标统计字符，值表示出现次数
int main()
{
    int c;
    while ((c = getchar()) != ';')
    {
        if (c >= 'A' && c <= 'Z')
        {
            int index = c - 'A';
            printf("%d \n", index);
            str[index]++;
        }
    }

    int max = -1;
    while (max++ < 26)
    {
        if (str[max] > 0)
            printf(" %c , %d \n", max + 'A', str[max]);
    }

    return 0;
}