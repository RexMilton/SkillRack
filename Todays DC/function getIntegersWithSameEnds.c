#include <stdio.h>
#include <stdlib.h>

typedef struct BoundedArray
{
    int SIZE;
    int *arr;
} boundedArray;
int main()
{
    char str[101];
    int K;
    scanf("%s\n%d", str, &K);
    boundedArray *bArr = getIntegersWithSameEnds(str, K);
    if (bArr == NULL)
    {
        printf("Array is not formed\n");
    }
    if (bArr->SIZE <= 0)
    {
        printf("Invalid size for the array\n");
    }
    for (int index = 0; index < bArr->SIZE; index++)
    {
        printf("%d ", bArr->arr[index]);
    }
    return 0;
}