/*381056135	Jul/02/2026 23:30UTC+6	Early_hammie	A - Codeforces Checking	C++23 (GCC 14-64, msys2)	Accepted	15 ms	0 KB*/

#include <iostream>

using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s = "codeforces";
        char c;
        cin >> c;
        bool found = false;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == c)
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}