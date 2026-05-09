/*336632632	Sep/02/2025 20:01UTC+6	Early_hammie	A - Word Capitalization	GNU C11	Accepted	124 ms	100 KB*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[1001];
    scanf("%s", str);

    str[0] = toupper(str[0]);

    printf("%s\n", str);
}
