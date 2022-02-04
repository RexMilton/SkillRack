#include <bits/stdc++.h>
using namespace std;
int bin(int x)
{
    int s = 0, c = 0, t;
    int b[101], bc = 0;
    while (x)
    {
        b[bc++] = x % 2;
        x /= 2;
    }
    for (int i = bc - 1; i >= 0; i--)
    {
        if (b[i])
            s += pow(2, c);
        c++;
    }
    return s;
}
int main(int argc, char **argv)
{

    int n;
    cin >> n;
    int a[n];
    int f = 1;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == bin(a[j]))
            {
                cout << a[i] << " " << a[j] << endl;
                f = 0;
            }
        }
    }
    if (f)
        cout << "-1";
}