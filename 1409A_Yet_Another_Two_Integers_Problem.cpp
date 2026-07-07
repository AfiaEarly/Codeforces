/*
381612702	Jul/07/2026 19:52UTC+6	Early_hammie	A - Yet Another Two Integers Problem	C++23 (GCC 14-64, msys2)	Accepted	78 ms	0 KB*/

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int dif = abs(a - b);

        int steps = (ceil(dif / 10.0));

        cout << steps << endl;
    }
}