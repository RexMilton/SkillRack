long long int po(int x)
{
    long long int y = 10;
    x /= 10;
    while (x)
    {
        x /= 10;
        y *= 10;
    }
    // printf("y-%d\n",y);
    return y;
}
long long int compressBinary(int N)
{
    // N=65407;
    long long int a[100000], ans = 0;
    int t = 0, p = 0, o = N, ai = 0;
    t = N % 2;
    while (N)
    {
        int y = N % 2;
        if (y == t)
        {
            p += t;
        }
        else
        {
            a[ai++] = p;
            p = N % 2;
            t = N % 2;
        }
        N /= 2;
    }
    a[ai++] = p;
    for (int i = ai - 1; i >= 0; i--)
    {
        ans *= po(a[i]);
        ans += a[i];
        // printf("%d ",a[i]);
    }
    // printf("\n");
    return ans;
}