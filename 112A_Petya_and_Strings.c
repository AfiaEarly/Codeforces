/*336740427	Sep/03/2025 16:45UTC+6	Early_hammie	A - Petya and Strings	GNU C11	Accepted	124 ms	100 KB*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i;
    char str1[101], str2[101];

    scanf("%s", str1);
    scanf("%s", str2);

    for (i = 0; str1[i]; i++)
    {
        str1[i] = toupper(str1[i]);
        str2[i] = toupper(str2[i]);
    }

    int cmp = strcmp(str1, str2);

    if (cmp < 0)
    {
        printf("%d\n", cmp);
    }

    else if (cmp > 0)
    {
        printf("%d\n", cmp);
    }

    else
    {
        printf("%d\n", cmp);
    }
}
