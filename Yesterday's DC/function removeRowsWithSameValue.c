#include <stdio.h>
#include <stdlib.h>

typedef struct BoundedArray
{
    int R, C;
    int **matrix;
} boundedArray;

boundedArray* removeRowsWithSameValue(int R, int C, int *matrix)
{
    boundedArray *new = (boundedArray*)malloc(sizeof(boundedArray));
    new->R = 0;
    new->C = C;
    new->matrix = (int**)malloc(sizeof(int *) * R);
    int row, col, notSame;
    for(row=0; row<R; row++) {
        notSame = 0;
        for(col=1; col<C; col++) {
            if(*(matrix+(row*C) + col) != *(matrix+(row*C) + col - 1)) { notSame = 1; break; }
        }
        if(notSame) {
            new->matrix[new->R] = (int*)malloc(sizeof(int) * C);
            for(col=0; col<C; col++) { new->matrix[new->R][col] = *(matrix+(row*C)+col); }
            new->R++;
        }
    }
    if(new->R == 0) { new->R= 1; new->C=1; new->matrix[0] = (int*)malloc(sizeof(int)); new->matrix[0][0] = -1; }
    return new;
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
