/*336855149	Sep/04/2025 16:24UTC+6	Early_hammie	A - Anton and Danik	GNU C11	Accepted	62 ms	200 KB*/

#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, count_anton = 0, count_danik = 0;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    for (i = 0; i < n; i++)
    {

        if (s[i] == 'A')
        {
            count_anton++;
        }

        else if (s[i] == 'D')
        {
            count_danik++;
        }
    }

    if (count_anton > count_danik)
    {
        printf("Anton\n");
    }
    else if (count_anton < count_danik)
    {
        printf("Danik\n");
    }
    else
    {
        printf("Friendship\n");
    }
}