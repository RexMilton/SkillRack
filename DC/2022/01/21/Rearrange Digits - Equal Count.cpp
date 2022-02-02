#include <bits/stdc++.h>
using namespace std;
long long int digit(long long int x)
{
    int c = 0;
    while (x)
    {
        c++;
        x /= 10;
    }
    return c;
}
int main(int argc, char **argv)
{
    long long int n;
    cin >> n;
    long long int a[n];
    int d[10] = {0};
    for (long long int i = 0; i < n; i++)
    {
        cin >> a[i];
        d[digit(a[i])] += 1;
    }
    int md = 0, mdc = 0, mmm = 10;
    for (int i = 0; i < 10; i++)
    {
        if (d[i] && i > md)
            md = i;
        if (d[i] && i < mmm)
            mmm = i;
    }
    mdc = (mmm + md) / 2;
    long long int udc = pow(10, mdc), ldc = pow(10, mdc - 1);
    long long int adv, s = 0, rb;
    for (long long int i = 0; i < n; i++)
    {
        if (a[i] > udc)
        {
            rb = pow(10, digit(a[i])) / udc;
            adv = a[i] % rb;
            a[i] /= rb;
        }
    }
    for (long long int i = 0; i < n; i++)
    {
        if (a[i] < ldc)
        {
            a[i] = (a[i] * rb) + adv;
        }
        printf("%lld ", a[i]);
        s += a[i];
    }
    printf("\n%lld", s);
}
