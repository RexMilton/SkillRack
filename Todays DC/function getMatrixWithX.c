#include <stdio.h>
#include <stdlib.h>

typedef struct BoundedArray
{
    int R, C;
    int **matrix;
} boundedArray;
int main()
{
    int R, C, X;
    scanf("%d %d %d", &R, &C, &X);
    boundedArray *bArr = getMatrixWithX(R, C, X);
    if (bArr == NULL || bArr->matrix == NULL || bArr->R != R || bArr->C != C)
    {
        printf("Matrix is not formed properly\n");
    }
    for (int row = 0; row < bArr->R; row++)
    {
        for (int col = 0; col < bArr->C; col++)
        {
            printf("%d ", bArr->matrix[row][col]);
        }
        printf("\n");
    }
    return 0;
}
