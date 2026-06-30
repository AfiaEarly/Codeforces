/*
380826426	Jun/30/2026 22:41UTC+6	Early_hammie	A - Another Puzzle from Papyrus	C++23 (GCC 14-64, msys2)	Accepted	93 ms	0 KB*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int costCalc(vector<int> &a, vector<int> &b, int n)
{
    int cost = 0;
    for (int i = 0; i < n; i++)
    {
        int dif = a[i] - b[i];
        if (dif >= 0)
        {
            cost += dif;
        }
        else
        {
            cost = -1;
            break;
        }
    }
    return cost;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c, sortcost = 0, unsortcost = 0, cost = -1;
        cin >> n >> c;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vector<int> a1 = a;
        vector<int> b1 = b;
        sort(a1.begin(), a1.end());
        sort(b1.begin(), b1.end());

        unsortcost = costCalc(a, b, n);
        sortcost = costCalc(a1, b1, n);
        if (sortcost >= 0)
        {
            sortcost += c;
        }

        if (sortcost >= 0 && unsortcost >= 0)
        {
            cost = min(sortcost, unsortcost);
        }
        else
        {
            cost = max(sortcost, unsortcost);
        }

        cout << cost << endl;
    }
}