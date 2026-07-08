/*381741372	Jul/08/2026 21:44UTC+6	Early_hammie	C - Prepend and Append	C++23 (GCC 14-64, msys2)	Accepted	46 ms	0 KB*/

#include <iostream>
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

        int l = 0;
        int r = n - 1;
        int len = s.length();
        for (int i = 0; i < n; i++)
        {
            if (l >= r)
            {

                break;
            }
            else if (s[l] != s[r])
            {

                l++;
                r--;
                len -= 2;
            }
            else
            {
                break;
            }
        }
        cout << len << endl;
    }
}