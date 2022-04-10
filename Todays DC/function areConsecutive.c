#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[101];
    scanf("%s", str);
    printf("%d", areConsecutive(str));
    return 0;
}