/*377500955	Jun/06/2026 18:29UTC+6	Early_hammie	A - Helpful Maths	C++23 (GCC 14-64, msys2)	Accepted	62 ms	0 KB*/

#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    int count = 0;
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '+')
        {
            count++;
        }
    }
    s = s.substr(count);

    for (int i = 1; i < s.length(); i = i + 2)
    {
        s.insert(i, "+");
    }

    cout << s;
}