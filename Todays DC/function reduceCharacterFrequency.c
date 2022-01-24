#include <stdio.h>
#include <stdlib.h>

char *reduceCharacterFrequency(char *str, int K)
{
}
int main()
{
    char str[1001];
    int K;
    scanf("%s\n%d", str, &K);
    char *newStr = reduceCharacterFrequency(str, K);
    if (newStr == str || newStr == NULL)
    {
        printf("New String is not formed\n");
    }
    if (newStr[0] == ' ' || newStr[0] == '\0')
    {
        printf("String is empty\n");
    }
    printf("%s", newStr);
    return 0;
}
