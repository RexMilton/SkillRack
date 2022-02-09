#include <stdio.h>
#include <stdlib.h>

int concatBinary(int num1, int num2)
{
    int a[1001], ac = 0;
    while (num1)
    {
        a[ac++] = num1 % 2;
        num1 /= 2;
    }
    int s = 0, p = 0, x;
    if (num2 == 0)
    {
        return 2;
    }
    while (num2)
    {
        x = num2 % 10;
        if (x)
            s += pow(2, p);
        p++;
        num2 /= 10;
    }
    for (int i = 0; i < ac; i++)
    {
        if (a[i])
            s += pow(2, p);
        p++;
    }
    return s;
}

int main()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    printf("%d", concatBinary(num1, num2));
    return 0;
}