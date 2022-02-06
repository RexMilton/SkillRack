#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
    {
        int c = 0, x = b[i];
        if (x > n)
        {
            cout << "-1 ";
            continue;
        }
        for (int j = i; x > 0 && j < n; j++)
        {
            if (a[j] >= a[i])
            {
                x--;
            }
            c++;
        }
        if (x)
            cout << "-1 ";
        else
            cout << c << " ";
    }
}