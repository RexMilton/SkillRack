#include <stdio.h>
#include <stdlib.h>

typedef struct BoundedArray
{
    int SIZE;
    int *arr;
} boundedArray;

boundedArray *getPositionDigitsSum(int SIZE, int *arr)
{
    boundedArray *a = malloc(sizeof(struct BoundedArray));
    a->SIZE = 0;
    a->arr = malloc(sizeof(int) * 1001);
    int b[1001], bc = 0;
    while (1)
    {
        int s = 0, temp = 0;
        for (int j = 0; j < SIZE; j++)
        {
            if (arr[j])
            {
                s += arr[j] % 10;
                arr[j] /= 10;
                temp = 1;
            }
        }
        if (temp == 0)
            break;
        b[bc++] = s;
    }
    for (int j = bc - 1; j >= 0; j--)
    {
        a->arr[a->SIZE++] = b[j];
    }
    return a;
}
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int index = 0; index < N; index++)
    {
        scanf("%d", &arr[index]);
    }
    boundedArray *bArr = getPositionDigitsSum(N, arr);
    if (bArr == NULL || bArr->arr == NULL || bArr->arr == arr)
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