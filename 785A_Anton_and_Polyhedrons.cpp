/*
392622042	Sep/29/2026 21:14UTC+6	Early_hammie	785A - Anton and Polyhedrons	C++23 (GCC 14-64, msys2)	Accepted	281 ms	0 KB*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (s == "Tetrahedron")
        {
            sum += 4;
        }
        else if (s == "Cube")
        {
            sum += 6;
        }
        else if (s == "Octahedron")
        {
            sum += 8;
        }

        else if (s == "Dodecahedron")
        {
            sum += 12;
        }

        else if (s == "Icosahedron")
        {
            sum += 20;
        }
    }
    cout << sum;
}