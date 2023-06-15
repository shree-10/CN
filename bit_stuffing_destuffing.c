#include <stdio.h>
#include <string.h>
int main()
{
    char *p, *q;
    char in[50];
    char stuff[50];
    char destuff[50];
    printf("\nEnter string: ");
    scanf("%s", &in);
    p = in;
    q = stuff;
    int count = 0;
    while (*p != '\0')
    {
        if (*p == '0')
        {
            *q = *p;
            p++;
            q++;
        }
        else
        {
            while (*p == '1' && count != 5)
            {
                count++;
                *q = *p;
                p++;
                q++;
            }
            if (count == 5)
            {
                *q = '0';
                q++;
            }
            count = 0;
        }
    }
    *q = '\0';
    printf("\nStuffed string is : %s", stuff);
    p = stuff;
    q = destuff;
    count = 0;
    while (*p != '\0')
    {
        if (*p == '0')
        {
            *q = *p;
            p++;
            q++;
        }
        else
        {
            while (*p == '1' && count != 5)
            {
                count++;
                *q = *p;
                p++;
                q++;
            }
            if (count == 5)
            {
                p++;
            }
            count = 0;
        }
    }
    printf("\nDestuffed string is %s ", destuff);

    return 0;
}