#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[1001];
    scanf("%[^\n]", str);
    printf("%d", findSumDifferentBase(str));
    return 0;
}