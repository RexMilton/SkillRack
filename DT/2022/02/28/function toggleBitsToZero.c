#include <stdio.h>
#include <stdlib.h>
int toggleBitsToZero(int SIZE, int *arr)
{
    int s = 0;
    for (int i = 0; i < SIZE; i++)
    {
        int t = 0, c = 0, d[1001], ctr = 0;
        while (arr[i])
        {
            d[ctr++] = arr[i] % 2;
            arr[i] /= 2;
        }
        for (int i = 0; i < ctr; i += 2)
        {
            d[i] = 0;
        }
        for (int i = 0; i < ctr; i++)
        {
            t += (pow(2, c) * d[i]);
            c++;
        }
        s += t;
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
    printf("%d", toggleBitsToZero(N, arr));
    return 0;
}