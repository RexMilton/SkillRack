#include <bits/stdc++.h>

using namespace std;
int digisum(int x)
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
    int n, k, t, v;
    cin >> n >> k;
    t = digisum(n);
    v = n;
    cout << n << " ";
    for (int i = 1; i < k; i++)
    {
        v += t;
        cout << v << " ";
        t = digisum(v);
    }
}
