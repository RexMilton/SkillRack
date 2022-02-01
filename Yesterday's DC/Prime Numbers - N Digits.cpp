#include <bits/stdc++.h>

using namespace std;
int d[10] = {0};
int check(int x)
{
    int test[10] = {0};
    while (x)
    {
        if (d[x % 10] != 1)
            return 0;
        test[x % 10]++;
        x /= 10;
    }
    for (int i = 0; i < 10; i++)
        if (test[i] > 1)
            return 0;
    return 1;
}
int prime(int x)
{
    for (int i = 2; i < x / 2 + 1; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}
int main(int argc, char **argv)
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        d[a[i]] += 1;
    }
    sort(a, a + n);
    int t = a[n - 1] * 100 + a[n - 2] * 10 + a[n - 3];
    for (int i = 2; i <= t; i++)
    {
        if (check(i) && prime(i))
            cout << i << " ";
    }
}
