/*377429938	Jun/06/2026 00:54UTC+6	Early_hammie	A - Next Round	C++23 (GCC 14-64, msys2)	Accepted	92 ms	0 KB*/

#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n, k, count = 0;
    cin >> n >> k;
    vector<int> score(n);
    for (int i = 0; i < n; i++)
    {
        cin >> score[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (score[i] > 0 && score[i] >= score[k - 1])
        {
            count++;
        }
    }
    cout << count;
}