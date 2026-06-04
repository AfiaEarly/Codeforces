/*
377288402	Jun/04/2026 19:25UTC+6	Early_hammie	61A - Ultra-Fast Mathematician	C++23 (GCC 14-64, msys2)	Accepted	46 ms	0 KB*/

#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
int main()
{

    string firstLine, secondLine;

    cin >> firstLine;
    cin >> secondLine;

    for (int i = 0; i < firstLine.size(); i++)
    {
        if (firstLine[i] == secondLine[i])
        {
            cout << "0";
        }
        else
        {
            cout << "1";
        }
    }
}