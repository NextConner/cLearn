#include <stdio.h>

void lineprint(char *parr[]);

main()
{
    char charray[100];
    char *parr[100];
    lineprint(parr);
    printf("%s \n", charray);
    return 0;
}

void lineprint(char *parr[])
{
    int c, nl;
    nl = 0;
    char *tempp;
    while ((c = getchar()) != ';')
    {
        //字符换行
        if (c == '\n')
        {

            *tempp++ = '\0';
            parr[nl++] = tempp;
            *tempp = '\0';
        }
        else
        {
            *tempp++ = c;
        }
        //写入原本字符，直接打印
    }
    printf("line count : %d \n", nl);
    for (int i = 0; i < nl; i++)
    {
        printf("buf: %d = %s", i, parr[i]);
    }
}