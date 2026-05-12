/*336852787	Sep/04/2025 15:58UTC+6	Early_hammie	A - Trippi Troppi	GNU C11	Accepted	15 ms	100 KB*/
#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s1[101], s2[101], s3[101];
        scanf("%s%s%s", s1, s2, s3);
        printf("%c%c%c", s1[0], s2[0], s3[0]);
    }
}