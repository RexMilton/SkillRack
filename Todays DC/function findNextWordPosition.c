#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[101];
    scanf("%[^\n\r]", str);
    findNextWordPosition(str);
    return 0;
}