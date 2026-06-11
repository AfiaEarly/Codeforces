/*378228217	Jun/11/2026 23:13UTC+6	Early_hammie	A - Vanya and Fence	C++23 (GCC 14-64, msys2)	Accepted	46 ms	0 KB*/

#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n, h;
    cin >> n >> h;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int width = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > h)
        {
            width += 2;
        }
        else
        {
            width += 1;
        }
    }
    cout << width;
}