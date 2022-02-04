#include <stdio.h>
#include <stdlib.h>

void findMissingInteger(int r, int c, int m[r][c])
{
    int mi = m[0][0], ma = m[0][0], x, y;
    int d[10001] = {0};
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (m[i][j] > ma)
                ma = m[i][j];
            if (m[i][j] && m[i][j] < mi)
                mi = m[i][j];
            if (m[i][j] == -1)
            {
                x = i;
                y = j;
            }
            d[m[i][j]] = 1;
        }
    }
    for (int i = mi; i <= ma; i++)
        if (d[i] == 0)
            m[x][y] = i;
}

int main()
{
    int R, C;
    scanf("%d %d", &R, &C);
    int matrix[R][C];
    for (int row = 0; row < R; row++)
    {
        for (int col = 0; col < C; col++)
        {
            scanf("%d", &matrix[row][col]);
        }
    }
    findMissingInteger(R, C, matrix);
    for (int row = 0; row < R; row++)
    {
        for (int col = 0; col < C; col++)
        {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }
    return 0;
}
