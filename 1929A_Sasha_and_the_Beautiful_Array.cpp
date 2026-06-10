/*377976027	Jun/09/2026 21:55UTC+6	Early_hammie	A - Sasha and the Beautiful Array	C++23 (GCC 14-64, msys2)	Accepted	109 ms	0 KB*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());

        int sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int term = arr[i + 1] - arr[i];

            sum += term;
        }
        cout << sum << endl;
    }
}