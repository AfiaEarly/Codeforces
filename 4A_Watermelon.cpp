/*326750898	Jul/01/2025 12:37UTC+6	Early_hammie	A - Watermelon	C++17 (GCC 7-32)	Accepted	122 ms	100 KB*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if (n > 2 && n % 2 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}