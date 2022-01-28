#include <stdio.h>
#include <stdlib.h>

typedef struct BoundedArray
{
    int SIZE;
    long long int *arr;
} boundedArray;

boundedArray *mergeEveryTwoIntegers(int SIZE, int *arr)
{
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
    boundedArray *bArr = mergeEveryTwoIntegers(N, arr);
    for (int index = 0; index < bArr->SIZE; index++)
    {
        printf("%lld ", bArr->arr[index]);
    }
    return 0;
}