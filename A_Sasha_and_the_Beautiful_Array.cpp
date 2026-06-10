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