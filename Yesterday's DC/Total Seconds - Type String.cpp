#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
    string a, b;
    getline(cin, a);
    getline(cin, b);
    int t = 0;
    for (int i = 0; b[i] != '\0'; i++)
    {
        for (int i1 = 0; a[i1] != '\0'; i1++)
        {
            if (a[i1] == b[i])
            {
                for (int j1 = i1; j1 >= 0; j1--)
                {
                    if (a[j1] == b[i + 1])
                    {
                        t += abs(j1 - i1);
                        break;
                    }
                }
                for (int j1 = i1; a[j1] != '\0'; j1++)
                {
                    if (a[j1] == b[i + 1])
                    {
                        t += abs(j1 - i1);
                        break;
                    }
                }
            }
        }
    }
    cout << t;
}