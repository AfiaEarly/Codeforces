/*336850601	Sep/04/2025 15:33UTC+6	Early_hammie	A - Stones on the Table	GNU C11	Accepted	154 ms	0 KB*/

#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, count = 0;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    for (i = 0; i < (n - 1); i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
    }

    printf("%d", count);
}