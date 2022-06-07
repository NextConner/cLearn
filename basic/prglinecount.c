#include <stdio.h>

main()
{

    int c, nl;
    nl = 0;
    char charray[100];
    char *chapointer = charray;
    while ((c = getchar()) != ';')
    {
        //字符换行
        if (c == '\n')
        {
            ++nl;
        }
        //写入原本字符，直接打印
        *chapointer++ = c;
    }
    printf("line count : %d \n", nl);
    printf("%s \n", charray);
    return 0;
}