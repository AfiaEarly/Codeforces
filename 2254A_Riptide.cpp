/*385652950	Aug/04/2026 22:13UTC+6	Early_hammie	2254A - Riptide	C++23 (GCC 14-64, msys2)	Accepted	31 ms	0 KB*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int dif1 = abs(a - b);
        int dif2 = abs(b - c);
        int dif3 = abs(c - a);

        int result = min({dif1, dif2, dif3});
        cout << result << endl;
    }
}