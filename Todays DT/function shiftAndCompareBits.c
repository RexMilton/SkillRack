#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N, X;
    scanf("%d %d", &N, &X);
    printf("%d ", shiftAndCompareBits(N, X));
    return 0;
}