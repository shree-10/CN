#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    printf("\nEnter string : ");
    gets(str);
    int i = 0, j = 0, count;
    while (i < strlen(str))
    {
        j = i + 1;
        count = 1;
        while (str[i] == str[j])
        {
            count++;
            j++;
        }
        if (count == 1)
        {
            printf("%c", str[i]);
        }
        else
        {
            printf("%d%c", count, str[i]);
        }
        i = j;
    }
    return 0;
}