#include <stdio.h>
#include <stdlib.h>
long long int everyTwoDigitsToInteger(int N)
{
    int a[1001], ctr = 0;
    while (N)
    {
        a[ctr++] = N % 10;
        N /= 10;
    }
    long long int s = 0;
    for (int i = ctr - 1; i > 0; i--)
    {
        long long int t = 0;
        if (a[i - 1] < a[i])
        {
            for (int j = a[i]; j >= a[i - 1]; j--)
            {
                t *= 10;
                t += j;
            }
        }
        else
        {
            for (int j = a[i]; j <= a[i - 1]; j++)
            {
                t *= 10;
                t += j;
            }
        }
        s += t;
    }
    return s;
}
int main()
{
    int N;
    scanf("%d", &N);
    printf("%lld", everyTwoDigitsToInteger(N));
    return 0;
}