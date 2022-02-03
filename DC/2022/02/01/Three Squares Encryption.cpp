#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
    string a, b;
    getline(cin, a);
    getline(cin, b);
    int f;
    for (int i1 = 0; a[i1] != '\0'; i1++)
    {
        f = 1;
        for (int i = 0; i < 9; i++)
        {
            if (a[i1] == b[i])
            {
                printf("1%d%d", (i / 3) + 1, (i % 3) + 1);
                f = 0;
            }
        }
        if (f)
        {
            for (int i = 9; i < 18; i++)
            {
                if (a[i1] == b[i])
                {
                    printf("2%d%d", ((i - 9) / 3) + 1, (i % 3) + 1);
                    f = 0;
                }
            }
        }
        if (f)
        {
            for (int i = 18; i < 27; i++)
            {
                if (a[i1] == b[i])
                {
                    printf("3%d%d", ((i - 18) / 3) + 1, (i % 3) + 1);
                }
            }
        }
    }
}