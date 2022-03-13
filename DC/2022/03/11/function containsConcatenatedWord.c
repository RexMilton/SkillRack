#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[10001];
    scanf("%[^\n]", str);
    printf("%d", containsConcatenatedWord(str));
    return 0;
}