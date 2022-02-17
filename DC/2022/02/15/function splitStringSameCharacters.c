#include <stdio.h>
#include <stdlib.h>
void splitStringSameCharacters(char *s)
{
    printf("%c", s[0]);
    if (s[0] == s[1] && s[0] != s[2])
        printf(" ");
    for (int i = 1; s[i] != '\0'; i++)
    {
        printf("%c", s[i]);
        if (s[i] == s[i + 1] && s[i] != s[i + 2] && s[i] != s[i - 1])
            printf(" ");
    }
}
int main()
{
    char str[1001];
    scanf("%s", str);
    splitStringSameCharacters(str);
    return 0;
}