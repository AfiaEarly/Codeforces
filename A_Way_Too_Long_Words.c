#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        char str[101];
        scanf("%s", str);
        int a = strlen(str);
        if (a > 10)
        {
            printf("%c%d%c\n", str[0], a - 2, str[a - 1]);
        }
        else
        {
            printf("%s\n", str);
        }
    }
}