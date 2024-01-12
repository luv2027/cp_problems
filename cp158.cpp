#include <cstdio>
#include <algorithm>
#include<bits/stdc++.h>


using namespace std;

int main()
{
    int n;
    cin >> n;

    pair<int, int>* x = new pair<int, int>[n * 2];
    for (int i = 0; i < n * 2; ++i)
    {
        cin >> x[i].first;
        x[i].second = i + 1;
    }

    sort(x, x + n * 2);
    bool possible = true;
    for (int i = 0; i < n * 2; i += 2)
    {
        if (x[i].first != x[i+1].first)
        {
            possible = false;
            break;
        }
    }

    if (possible)
    {
        for (int i = 0; i < n * 2; i += 2)
        {
            cout << x[i].second << " " <<  x[i+1].second << endl;
        }
    }
    else
    {
        cout << -1 << endl;
    }

    delete[] x;
    return 0;
}
