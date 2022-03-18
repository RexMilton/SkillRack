#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str1[1001], str2[1001], str3[1001];
    scanf("%s\n%s\n%s", str1, str2, str3);
    char *str = mergeThreeStringValues(str1, str2, str3);
    if(str == NULL || str == str1 || str == str2 || str == str3)
    {
        printf("String is not formed\n");
    }
    if(str[0] == ' ' || str[0] == '\0')
    {
        printf("String is empty\n");
    }
    printf("%s", str);
    return 0;
}