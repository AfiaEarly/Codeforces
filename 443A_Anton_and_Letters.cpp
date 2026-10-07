/*
393512001	Oct/07/2026 20:00UTC+6	Early_hammie	443A - Anton and Letters	C++23 (GCC 14-64, msys2)	Accepted	46 ms	0 KB*/

#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    set<char> new_s(s.begin(), s.end());
    new_s.erase(',');
    new_s.erase('{');
    new_s.erase('}');
    new_s.erase(' ');

    int result = new_s.size();
    cout << result;
}