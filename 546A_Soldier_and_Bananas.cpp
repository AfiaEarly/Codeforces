/*378102852	Jun/10/2026 21:36UTC+6	Early_hammie	A - Soldier and Bananas	C++23 (GCC 14-64, msys2)	Accepted	31 ms	0 KB*/

#include <iostream>
using namespace std;
int main()
{
    long long k, n, w;
    cin >> k >> n >> w;
    long long cost = 0;
    for (int i = 0; i <= w; i++)
    {
        cost += k * i;
    }
    if (cost > n)
    {
        cout << cost - n;
    }

    else
    {
        cout << "0";
    }
}