
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
    int sr = 0, sc = y - 1, er = x, ec = c;
    vector<int> v;
    for (int i = sr; i < er; i++)
    {
        for (int j = sc; j < ec; j++)
        {
            v.push_back(a[i][j]);
        }
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for (int i = sr; i < er; i++)
    {
        for (int j = sc; j < ec; j++)
        {
            a[i][j] = v.back();
            v.pop_back();
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}