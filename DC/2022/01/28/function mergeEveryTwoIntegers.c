#include <stdio.h>
#include <stdlib.h>

typedef struct BoundedArray
{
    int SIZE;
    long long int *arr;
} boundedArray;

int digit(int x)
{
    int s = 1;
    while (x)
    {
        s *= 10;
        x /= 10;
    }
    return s;
}
boundedArray *mergeEveryTwoIntegers(int SIZE, int *arr)
{
    struct BoundedArray *a = malloc(sizeof(struct BoundedArray));
    a->SIZE = 0;
    a->arr = malloc(sizeof(long long int) * (SIZE + 1));
    for (int i = 0; i < SIZE; i += 2)
    {
        long long int x, y, t;
        t = digit(arr[i + 1] / 10);
        x = (arr[i] % 10) + (arr[i + 1] / t);
        if (x > 9)
        {
            a->arr[a->SIZE++] = arr[i];
            a->arr[a->SIZE++] = arr[i + 1];
        }
        else
        {
            y = ((arr[i] / 10) * 10 + x) * t + arr[i + 1] % t;
            a->arr[a->SIZE++] = y;
        }
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
    boundedArray *bArr = mergeEveryTwoIntegers(N, arr);
    for (int index = 0; index < bArr->SIZE; index++)
    {
        printf("%lld ", bArr->arr[index]);
    }
    return 0;
}