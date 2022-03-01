#include <bits/stdc++.h>

using namespace std;
int check(string s)
{
    char x[1001];
    int ctr = 0;
    for (int i = 0; i < s.size(); i++)
        if (isdigit(s[i]))
            x[ctr++] = s[i];
    x[ctr] = '\0';
    return atoi(x);
}
int main(int argc, char **argv)
{
    vector<string> v;
    string s;
    while (cin >> s)
    {
        v.push_back(s);
    }
    int a[v.size()], ctr = 0;
    for (int i = 0; i < v.size(); i++)
        a[ctr++] = check(v[i]);
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (a[i] > a[j])
                swap(a[i], a[j]);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            if (v[j] != "*" && a[i] == check(v[j]))
            {
                cout << v[j] << " ";
                v[j] = "*";
                break;
            }
        }
    }
}
