#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
    int x, y, t;
    cin >> x >> y >> t;
    if (t >= 7)
    {
        if (x * 6 < y * 7)
        {
            cout << -1;
        }
        else
        {
            cout << (y * t + x - 1) / x;
        }
    }
    else
    {
        cout << (x * t < y * t ? -1 : (x - 1 + y * t) / x);
    }
}