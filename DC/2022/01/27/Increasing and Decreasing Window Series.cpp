#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
    int n, k, c = 1, f = 1, si = 1, ei = n;
    cin >> n >> k;
    while (1)
    {
        if (f < 0)
        {
            for (int i = si; i <= ei; i++)
            {
                if (c == k)
                {
                    cout << i;
                    return 0;
                }
                c++;
            }
        }
        else
        {
            for (int i = ei; i >= si; i--)
            {
                if (c == k)
                {
                    cout << i;
                    return 0;
                }
                c++;
            }
        }
        f *= -1;
        si = ei + 1;
        ei += n;
    }
}
