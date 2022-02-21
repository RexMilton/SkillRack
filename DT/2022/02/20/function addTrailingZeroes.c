#include <stdio.h>
#include <stdlib.h>
int digit(int x)
{
    int s = 0;
    while (x)
    {
        x /= 10;
        s++;
    }
    return s;
}
void addTrailingZeroes(int SIZE, int arr[])
{
    int m = arr[0], d, s = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] > m)
            m = arr[i];
    }
    m = digit(m);
    for (int i = 0; i < SIZE; i++)
    {
        d = digit(arr[i]);
        if (d < m)
        {
            for (int j = 0; j < m - d; j++)
                arr[i] *= 10;
        }
        s += arr[i];
    }
    printf("%d", s);
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
    addTrailingZeroes(N, arr);
    return 0;
}