#include <bits/stdc++.h>

using namespace std;

int ans = 0;
void solve(string s, int pos)
{
    if (s[0] == '0' && s.size() > 1)
        return;
    if (pos == s.size())
    {
        int f = 1;
        for (char i = '0'; i <= '9' && f; i++)
        {
            f = 0;
            string t = s;
            for (int j = 0; j < pos; j++)
            {
                if (s[j] == 'X')
                {
                    f = 1;
                    t[j] = i;
                }
            }
            if (t[0] == '0' && t.size() > 1)
                continue;
            int val = stoi(t);
            if (val % 25 == 0)
                ans++;
        }
        return;
    }
    if (s[pos] == '_')
    {
        for (char c = '0'; c <= '9'; c++)
        {
            s[pos] = c;
            solve(s, pos + 1);
        }
    }
    else
    {
        solve(s, pos + 1);
    }
}
int main(int argc, char **argv)
{
    string s;
    cin >> s;
    solve(s, 0);
    cout << ans;
}