#include <stdio.h>
#include <stdlib.h>
void replaceWithNextDigit(int n)
{
    int s[1001];
    int ctr = 0;
    while (n)
    {
        s[ctr++] = (n % 10);
        n /= 10;
    }
    int a[ctr + 1], ctr1 = 0;
    for (int i = ctr - 1; i >= 0; i--)
    {
        int t = 0;
        for (int j = ctr - 1; j >= 0; j--)
        {
            int x = s[j];
            if (i == j)
            {
                if (x == 9)
                    x = 0;
                else
                    x += 1;
            }
            t *= 10;
            t += x;
        }
        a[ctr1++] = t;
    }
    for (int i = 0; i < ctr1; i++)
    {
        for (int j = i + 1; j < ctr1; j++)
        {
            if (a[i] > a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    for (int i = 0; i < ctr1; i++)
        printf("%d ", a[i]);
}
int main()
{
    int N;
    scanf("%d", &N);
    replaceWithNextDigit(N);
    return 0;
}
