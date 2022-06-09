#include <stdio.h>

void lineprint(char *arrpoi);

main()
{
    char charray[100];
    lineprint(charray);
    printf("%s \n", charray);
    return 0;
}

void lineprint(char *arrpoi)
{
    int c, nl;
    nl = 0;
    while ((c = getchar()) != ';')
    {
        //字符换行
        if (c == '\n')
        {
            ++nl;
        }
        //写入原本字符，直接打印
        *arrpoi++ = c;
    }
    printf("line count : %d \n", nl);
}