/*377939637	Jun/09/2026 20:59UTC+6	Early_hammie	A - Theatre Square	C++23 (GCC 14-64, msys2)	Accepted	31 ms	0 KB*/

#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    long long n, m, a;
    cin >> n >> m >> a;

    long long height = (n / a);
    long long width = (m / a);

    if (n % a != 0)
    {
        height += 1;
    }
    if (m % a != 0)
    {
        width += 1;
    }

    cout << height * width << "\n";
}