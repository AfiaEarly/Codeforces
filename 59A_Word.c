/*336836267	Sep/04/2025 12:58UTC+6	Early_hammie	A - Word	GNU C11	Accepted	92 ms	100 KB*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int i;
    char str[101];
    int upr = 0, lwr = 0;
    scanf("%s", str);
    for (i = 0; str[i]; i++)
    {
        if (isupper(str[i]))
        {
            upr++;
        }
        else
        {
            lwr++;
        }
    }
    if (upr > lwr)
    {
        for (i = 0; str[i]; i++)
        {
            strupr(str);
        }
    }
    else
    {
        for (i = 0; str[i]; i++)
        {
            strlwr(str);
        }
    }

    printf("%s\n", str);
}