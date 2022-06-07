#include <stdio.h>

int main()
{
    int c;
    int cr[20];
    char cp[20];
    int *numpinter = cr;
    char *opspinter = cp;
    int ops = '+' | '-' | '*' | '/';
    while ((c = getchar()) != ';')
    {
        if (c >= '0' && c <= '9')
        {
            *numpinter++ = c;
        }
        else if ((c & ops) == c)
        {
            int n1 = *--numpinter;
            int n2 = *--numpinter;
            switch (c)
            {
            case '+':
                *numpinter++ = n1 + n2;
                break;
            case '-':
                *numpinter++ = n2 + n1;
                break;
            case '*':
                *numpinter++ = n1 * n2;
                break;
            case '/':
                *numpinter++ = n2 / n1;
                break;
            default:
                break;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (cr[i] != 0)
        {
            printf("%d \n", cr[i]);
        }
    }
    return 0;
}