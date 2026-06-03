/*
377201672	Jun/03/2026 23:59UTC+6	Early_hammie	A - Sereja and Dima	C++23 (GCC 14-64, msys2)	Accepted	46 ms	0 KB*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int SreejaScore = 0;
    int DimaScore = 0;
    vector<int> cards(n);
    for (int i = 0; i < n; i++)

    {
        cin >> cards[i];
    }
    for (int i = 0; i < n; i++)

    {
        int score;
        if (cards.front() > cards.back())
        {
            score = cards.front();

            cards.erase(cards.begin());
        }
        else
        {
            score = cards.back();
            cards.pop_back();
        }

        if (i % 2 == 0)
        {
            SreejaScore += score;
        }
        else
        {
            DimaScore += score;
        }
    }

    cout << SreejaScore << " " << DimaScore << endl;
}