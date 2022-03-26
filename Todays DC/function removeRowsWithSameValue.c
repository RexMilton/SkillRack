#include <stdio.h>
#include <stdlib.h>

typedef struct BoundedArray
{
    int R, C;
    int **matrix;
} boundedArray;

boundedArray* removeRowsWithSameValue(int R, int C, int *matrix)
{
} // End of removeRowsWithSameValue function

int main()
{
    int R, C;
    scanf("%d %d", &R, &C);
    int matrix[R][C];
    for(int row = 0; row < R; row++)
    {
        for(int col = 0; col < C; col++)
        {
            scanf(" %d", &matrix[row][col]);
        }
    }
    boundedArray *bArr = removeRowsWithSameValue(R, C, matrix);
    if(bArr == NULL)
    {
        printf("Matrix is not formed\n");
    }
    if(bArr->R <= 0 || bArr->C <= 0)
    {
        printf("Invalid size for the revised matrix\n");
    }
    for(int row = 0; row < bArr->R; row++)
    {
        for(int col = 0; col < bArr->C; col++)
        {
            printf("%d ", bArr->matrix[row][col]);
        }
        printf("\n");
    }
    return 0;
} // End of main() function