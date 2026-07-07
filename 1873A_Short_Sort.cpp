/*381622988	Jul/07/2026 21:10UTC+6	Early_hammie	1873A - Short Sort	C++23 (GCC 14-64, msys2)	Accepted	31 ms	0 KB*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;

        if (s[0] == 'a' || s[1] == 'b' || s[2] == 'c')
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}