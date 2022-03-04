#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int x = n;
    while (x)
    {
        int t = n;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
                a[i] -= x;
            if (a[i] <= 0)
            {
                a[i] = 0;
                t--;
            }
        }
        x = t;
        for (int i = 0; i < n; i++)
        {
            if (a[i])
                printf("%d ", a[i]);
        }
        if (x)
            cout << endl;
    }
}