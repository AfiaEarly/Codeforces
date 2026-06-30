/*380786413	Jun/30/2026 21:38UTC+6	Early_hammie	A - Divide and Conquer	C++23 (GCC 14-64, msys2)	Accepted	31 ms	0 KB*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;

        cin >> x >> y;

        if (x % y == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}