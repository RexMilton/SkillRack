#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
    int x, y, d, t;
    cin >> x >> y >> d;
    while (x <= y)
    {
        t = x;
        while (t > 0)
        {
            if (t % 10 == d)
            {
                cout << x << " ";
                break;
            }
            else
                t /= 10;
        }
        x++;
    }
}