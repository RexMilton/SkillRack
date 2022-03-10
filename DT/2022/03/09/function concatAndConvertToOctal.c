#include <stdio.h>
#include <stdlib.h>
int d[100000001], ctr = 0;
int bin(int x)
{
    int t[1001], tctr = 0;
    while (x)
    {
        t[tctr++] = x % 2;
        x /= 2;
    }
    for (int i = tctr - 1; i >= 0; i--)
    {
        d[ctr++] = t[i];
    }
}
void concatAndConvertToOctal(int n, int a[])
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        bin(a[i]);
    }
    int temp[1001], tectr = 0;
    for (int i = ctr - 1; i >= 0; i -= 3)
    {
        int x = d[i] * 1 + d[i - 1] * 2 + d[i - 2] * 4;
        temp[tectr++] = x;
    }
    for (int i = tectr - 1; i >= 0; i--)
    {
        printf("%d", temp[i]);
    }
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
    concatAndConvertToOctal(N, arr);
    return 0;
}