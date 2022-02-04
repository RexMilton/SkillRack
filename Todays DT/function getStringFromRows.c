
#include <stdio.h>
#include <stdlib.h>

char *getStringFromRows(int R, int C, char *matrix, int X, int Y)
{
    char *s = malloc(sizeof(char) * 10001);
    char m[R][C];
    int ctrm = 0;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            m[i][j] = *(matrix + ctrm++);
        }
    }
    X--, Y--;
    int ctr = 0;
    if (Y > X)
    {
        for (int i = X; i <= Y; i++)
        {
            for (int j = 0; j < C; j++)
            {
                s[ctr++] = m[i][j];
            }
        }
    }
    else
    {
        for (int i = X; i < R; i++)
        {
            for (int j = 0; j < C; j++)
            {
                s[ctr++] = m[i][j];
            }
        }
        for (int i = 0; i <= Y; i++)
        {
            for (int j = 0; j < C; j++)
                s[ctr++] = m[i][j];
        }
    }
    return s;
} // End of getStringFromRows function

int main()
{
    int R, C, X, Y;
    scanf("%d %d", &R, &C);
    char matrix[R][C];
    for (int row = 0; row < R; row++)
    {
        for (int col = 0; col < C; col++)
        {
            scanf(" %c", &matrix[row][col]);
        }
    }
    scanf("%d %d", &X, &Y);
    char *result = getStringFromRows(R, C, matrix, X, Y);
    if (result == NULL)
    {
        printf("New string is not formed\n");
    }
    if (result[0] == '\0' || result[0] == ' ')
    {
        printf("String is empty\n");
    }
    printf("%s", result);
    return 0;
} // End of main() function
