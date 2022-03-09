#include <stdio.h>
#include <stdlib.h>

typedef struct BoundedArray
{
    int R, C;
    int **matrix;
} boundedArray;

boundedArray *getMatrixWithX(int r, int c, int x)
{
    struct BoundedArray *arr = malloc(sizeof(struct BoundedArray));
    arr->R = r;
    arr->C = c;
    int **m = (int **)malloc(r * sizeof(int *));
    for (int i = 0; i < r; i++)
        m[i] = malloc(sizeof(int *) * c);
    arr->matrix = m;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr->matrix[i][j] = x;
        }
    }
    return arr;
}

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
