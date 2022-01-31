#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
    int r, c;
    cin >> r >> c;
    int a[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];
    int x, y;
    cin >> x >> y;
    int b[1001], ctr = 0;
    for (int i = 0; i < c; i++)
        b[ctr++] = a[0][i];
    for (int i = 1; i < r; i++)
        b[ctr++] = a[i][c - 1];
    for (int i = c - 2; i > 0; i--)
        b[ctr++] = a[r - 1][i];
    for (int i = r - 1; i > 0; i--)
        b[ctr++] = a[i][0];
    int t1 = ((x - 1) % ctr), t2 = ((y - 1) % ctr);
    int t = b[t1];
    b[t1] = b[t2];
    b[t2] = t;
    int ctr1 = 0;
    for (int i = 0; i < c; i++)
        a[0][i] = b[ctr1++];
    for (int i = 1; i < r; i++)
        a[i][c - 1] = b[ctr1++];
    for (int i = c - 2; i > 0; i--)
        a[r - 1][i] = b[ctr1++];
    for (int i = r - 1; i > 0; i--)
        a[i][0] = b[ctr1++];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
