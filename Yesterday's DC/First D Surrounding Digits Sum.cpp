#include <bits/stdc++.h>

using namespace std;
int r, c;
int a[51][51];
int l[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}};
int check(int i, int j)
{
    int temp = a[i][j], count = 0, s = 0;
    for (int itr = 0; itr < 8; itr++)
    {
        if (count == temp)
            return s;
        int t = a[i + l[itr][0]][j + l[itr][1]];
        if (t > 0)
        {
            count++;
            s += t;
        }
    }
    return s;
}
int main(int argc, char **argv)
{
    cin >> r >> c;
    for (int i = 0; i < r + 2; i++)
        for (int j = 0; j < c + 2; j++)
            a[i][j] = 0;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            printf("%d ", check(i, j));
        }
        cout << endl;
    }
}