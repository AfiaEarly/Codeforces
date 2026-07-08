/*381731473	Jul/08/2026 20:06UTC+6	Early_hammie	A - Stair, Peak, or Neither?	C++23 (GCC 14-64, msys2)	Accepted	46 ms	0 KB*/

#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a < b && b < c)
        {
            cout << "STAIR" << endl;
        }
        else if (a < b && b > c)
        {
            cout << "PEAK" << endl;
        }

        else
        {
            cout << "NONE" << endl;
        }
    }
}