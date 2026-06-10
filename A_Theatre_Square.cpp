#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    long long n, m, a;
    cin >> n >> m >> a;

    long long height = (n / a);
    long long width = (m / a);

    if (n % a != 0)
    {
        height += 1;
    }
    if (m % a != 0)
    {
        width += 1;
    }

    cout << height * width << "\n";
}