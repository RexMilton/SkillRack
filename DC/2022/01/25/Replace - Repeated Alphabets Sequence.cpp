#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        int j = i + 1, c = 0;
        char t = s[i];
        while (s[i] == s[j] && s[j] != '\0')
        {
            t = t + 1;
            if (t > 'z')
                t = 'a';
            s[j++] = t;
            c++;
        }
        i += c;
    }
    cout << s;
}