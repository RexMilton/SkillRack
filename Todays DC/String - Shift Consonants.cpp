#include <bits/stdc++.h>

using namespace std;
int vow(char x)
{
    x = tolower(x);
    return x == 'a' || x == 'e' || x == 'u' || x == 'i' || x == 'o';
}
int main(int argc, char **argv)
{
    string s;
    getline(cin, s);
    vector<char> v, c;
    for (int i = 0; i < s.size(); i++)
    {
        if (vow(s[i]))
            v.push_back(s[i]);
        else
            c.push_back(s[i]);
    }
    int vctr = 0, cctr = 0;
    rotate(c.begin(), c.begin() + 1, c.end());
    for (int i = 0; i < s.size(); i++)
    {
        if (vow(s[i]))
        {
            cout << v[vctr];
            vctr++;
        }
        else
        {
            cout << c[cctr];
            cctr++;
        }
    }
}