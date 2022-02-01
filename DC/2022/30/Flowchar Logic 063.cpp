#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
    int n, v = 0, c = 0;
    cin >> n;
    while (n > 0)
    {
        if (n % 10 == 0)
            c++;
        else
            v = (v * 10) + (n % 10);
        n /= 10;
    }
    while (c > 0)
    {
        v *= 10;
        c--;
    }
    cout << v;
}
