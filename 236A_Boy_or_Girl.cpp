/*
374318256	May/12/2026 23:16UTC+6	Early_hammie	A - Boy or Girl	C++23 (GCC 14-64, msys2)	Accepted	124 ms	100 KB*/

#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{

    string s;
    cin >> s;
    set<char> count(s.begin(), s.end());

    if (count.size() % 2 != 0)
    {
        cout << "IGNORE HIM!" << endl;
    }
    else
    {
        cout << "CHAT WITH HER!" << endl;
    }
}