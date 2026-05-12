/*336953897	Sep/05/2025 12:27UTC+6	Early_hammie	A - Bear and Big Brother	GNU C11	Accepted	62 ms	100 KB*/

#include <stdio.h>
int main()
{
    int a, b, year = 0;
    scanf("%d %d", &a, &b);

    while (a <= b)
    {
        a = a * 3;
        b = b * 2;
        year++;
    }

    printf("%d\n", year);
}