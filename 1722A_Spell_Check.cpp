/*
393503854	Oct/07/2026 18:44UTC+6	Early_hammie	A - Spell Check	C++23 (GCC 14-64, msys2)	Accepted	31 ms	0 KB*/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        sort(s.begin(), s.end());

        if (s == "Timru")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}