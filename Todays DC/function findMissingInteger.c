#include <stdio.h>
#include <stdlib.h>

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
