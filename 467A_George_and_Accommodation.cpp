/*
376928290	Jun/02/2026 00:10UTC+6	Early_hammie	467A - George and Accommodation	C++23 (GCC 14-64, msys2)	Accepted	46 ms	0 KB*/
#include <iostream>

using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int p, q;
        cin >> p >> q;
        if ((q - p) >= 2)
        {
            count++;
        }
    }
    cout << count;
}