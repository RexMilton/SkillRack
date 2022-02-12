#include <bits/stdc++.h>

using namespace std;
int digit(int x)
{
    int s = 1;
    while (x)
    {
        s *= 10;
        x /= 10;
    }
    return s;
}
int main(int argc, char **argv)
{
    int n;
    cin >> n;
    char x[1001];
    int a[n * 2], ac = 0;
    int t = 0;
    while (scanf("%s ", x) > 0)
    {
        char s[1001], a1[100], b1[101];
        int sc = 0, f = 1, a1c = 0, b1c = 0;
        for (int i = 0; x[i] != '\0'; i++)
        {
            if (x[i] != '|')
                s[sc++] = x[i];
            if (x[i] == '|')
            {
                f = 0;
                continue;
            }
            if (f)
                a1[a1c++] = x[i];
            else
                b1[b1c++] = x[i];
        }
        s[sc] = '\0';
        a1[a1c] = '\0';
        b1[b1c] = '\0';
        t += atoi(s);
        a[ac++] = atoi(a1);
        a[ac++] = atoi(b1);
    }
    printf("%d ", t);
    for (int i = 0; i < ac; i++)
    {
        for (int j = i + 1; j < ac; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    t = 0;
    for (int i = 0; i < ac; i += 2)
        t += a[i] * digit(a[i + 1]) + a[i + 1];
    printf("%d ", t);
}
