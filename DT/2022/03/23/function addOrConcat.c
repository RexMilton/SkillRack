#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[1001];
    scanf("%s", str);
    char *result = addOrConcat(str);
    if (result == NULL || result == str)
    {
        printf("String is not formed\n");
    }
    if (result[0] == ' ' || result[0] == '\0')
    {
        printf("String is empty\n");
    }
    printf("%s", result);
    return 0;
}