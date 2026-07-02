/*381053112	Jul/02/2026 23:01UTC+6	Early_hammie	A - Restoring Three Numbers	C++23 (GCC 14-64, msys2)	Accepted	31 ms	0 KB*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    vector<int> arr(4);

    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int a = arr[3] - arr[0];
    int b = arr[3] - arr[1];
    int c = arr[3] - arr[2];

    cout << a << " " << b << " " << c << endl;
}