#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    // n=2;
    // s="##";
    int total = 0, c, p;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '#')
        {
            c = 0, p = i - 1;
            while (i < n && s[i] == '#')
            {
                i++;
                c++;
            }
            // printf("%d %d %d\n",p,c,i);
            if (c < 2)
                continue;
            if (p == -1 || i == n)
            {
                total += c / 2;
                continue;
            }
            if (c % 4 == 0)
            {
                if (s[p] != s[i])
                    total += (c / 2) - 1;
                else
                    total += c / 2;
            }
            else if (c % 2)
            {
                total += c / 2;
            }
            else
            {
                if (s[p] == s[i])
                    total += (c / 2) - 1;
                else
                    total += c / 2;
            }
            // printf("%d %d %d\n",p,total,i);
        }
    }
    cout << total;
}