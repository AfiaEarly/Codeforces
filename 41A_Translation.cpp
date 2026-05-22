/*375662181	May/22/2026 21:20UTC+6	Early_hammie	41A - Translation	C++23 (GCC 14-64, msys2)	Accepted	46 ms	100 KB*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
    string t, s;
    cin >> t >> s;
    string rev = t;
    reverse(rev.begin(), rev.end());

    if (rev == s)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}