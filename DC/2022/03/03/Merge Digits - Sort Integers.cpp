#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
    int n, x, y;
    cin >> n;
    int a[n / 2];
    for (int i = 0; i < n / 2; i++)
    {
        cin >> x >> y;
        int t = 0;
        int r3 = x % 10, s3 = y % 10;
        int r2 = (x / 10) % 10, s2 = (y / 10) % 10;
        int r1 = (x / 100) % 10, s1 = (y / 100) % 10;
        t = t + max(r1, s1) * 10 + min(r1, s1);
        t = (t * 10 + max(r2, s2)) * 10 + min(r2, s2);
        t = (t * 10 + max(r3, s3)) * 10 + min(r3, s3);
        a[i] = t;
    }
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = i + 1; j < n / 2; j++)
        {
            if (a[i] > a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    for (int i = 0; i < n / 2; i++)
        printf("%d ", a[i]);
}
