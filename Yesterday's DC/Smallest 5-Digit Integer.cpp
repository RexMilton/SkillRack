#include <bits/stdc++.h>
using namespace std;
int sum(int x)
{
    int s = 0;
    while (x)
    {
        s += x % 10;
        x /= 10;
    }
    return s;
}
int main(int argc, char **argv)
{
    int n;
    cin >> n;
    for (int i = 10000; i < 100000; i++)
    {
        if (sum(i) == n)
        {
            cout << i;
            return 0;
        }
    }
    cout << "-1";
}
