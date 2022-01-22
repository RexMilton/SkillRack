#include <stdio.h>
#include <stdlib.h>

int bin(int x)
{
    int a[1001], c = 0;
    while (x > 0)
    {
        a[c++] = x % 2;
        x /= 2;
    }
    int t = 0;
    for (int i = c - 1; i >= 0; i--)
    {
        t *= 10;
        t += a[i];
    }
    return t;
}

int getBinaryAsDecimalSum(int SIZE, int *arr)
{
    int s = 0;
    for (int i = 0; i < SIZE; i++)
    {
        s += bin(arr[i]);
    }
    return s;
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
    printf("%d", getBinaryAsDecimalSum(N, arr));
    return 0;
}
