/*377299556	Jun/04/2026 21:10UTC+6	Early_hammie	282A - Bit++	C++23 (GCC 14-64, msys2)	Accepted	31 ms	0 KB*/

#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = 0;
    string s;
    for (int i = 0; i < n; i++)
    {

        cin >> s;
        if (s[1] == '+')
        {
            x = x + 1;
        }
        else
        {
            x = x - 1;
        }
    }
    cout << x;
}