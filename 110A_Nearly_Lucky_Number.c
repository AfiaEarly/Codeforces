/*336851286	Sep/04/2025 15:41UTC+6	Early_hammie	A - Nearly Lucky Number	GNU C11	Accepted	92 ms	100 KB*/

#include <stdio.h>
#include <string.h>
int main()
{
    char n[20];
    int i, count = 0;
    scanf("%s", &n);

    for (i = 0; i < strlen(n); i++)
    {
        if (n[i] == '4' || n[i] == '7')
        {
            count++;
        }
    }

    if (count == 4 || count == 7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}