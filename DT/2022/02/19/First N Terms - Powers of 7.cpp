#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    cout << pow(7, 0) << " ";
    n--;
    int c = 1;
    while (n > 0)
    {
        cout << pow(7, c) << " ";
        n--;
        for (int i = 0; i < c; i++)
        {
            cout << pow(7, i) + pow(7, c) << " ";
            n--;
            if (n <= 0)
                return 0;
        }
        int s = 0;
        if (c > 1)
        {
            for (int i = 0; i < c; i++)
            {
                s += pow(7, i);
            }
            n--;
            cout << s << " ";
        }
        c++;
    }
}