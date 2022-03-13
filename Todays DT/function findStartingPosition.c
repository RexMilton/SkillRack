#include <stdio.h>
#include <stdlib.h>

int* findStartingPosition(int R, int C, char *matrix, char *str)
{



} // End of findStartingPosition function

int main()
{
    int R, C;
    scanf("%d%d", &R, &C);
    char matrix[R][C], str[C+1];
    for(int row = 0; row < R; row++)
    {
        for(int col = 0; col < C; col++)
        {
            scanf(" %c", &matrix[row][col]);
        }
    }
    scanf("%s", str);
    int *pos = findStartingPosition(R, C, matrix, str);
    if(pos == NULL)
    {
        printf("Array is not formed\n");
    }
    printf("%d %d", pos[0], pos[1]);
    return 0;
} // End of main function