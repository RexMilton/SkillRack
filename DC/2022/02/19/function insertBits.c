
#include <stdio.h>
#include <stdlib.h>
int insertBits(int X, int Y)
{
    int a[1001], b[1001], ac = 0, bc = 0;
    while (X)
    {
        a[ac++] = X % 2;
        X /= 2;
    }
    while (Y)
    {
        b[bc++] = Y % 2;
        Y /= 2;
    }
    int p = 0, s = 0, c = 0;
    for (int i = 0; i < ac; i++)
    {
        if (a[i] == 1)
        {
            p = i;
            break;
        }
    }
    for (int i = p - 1; i >= 0; i--)
    {
        if (a[i])
            s += pow(2, c);
        c++;
    }
    for (int i = 0; i < bc; i++)
    {
        if (b[i])
            s += pow(2, c);
        c++;
    }
    for (int i = p; i < ac; i++)
    {
        if (a[i])
            s += pow(2, c);
        c++;
    }
    return s;
}
int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);
    printf("%d", insertBits(X, Y));
    return 0;
}
