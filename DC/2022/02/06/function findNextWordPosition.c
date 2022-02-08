#include <stdio.h>
#include <stdlib.h>
void findNextWordPosition(char *str)
{
    char s[1001];
    int ctr = 0;
    for (int i = 1; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            s[ctr++] = str[i - 1];
    }
    s[ctr++] = str[strlen(str) - 1];
    for (int i = 0; i < ctr; i++)
    {
        int f = 1;
        for (int j = i + 1; j < ctr; j++)
        {
            if (s[i] == s[j])
            {
                printf("%d ", j + 1);
                f = 0;
                break;
            }
        }
        if (f)
        {
            for (int j = 0; j <= i; j++)
            {
                if (s[i] == s[j])
                {
                    printf("%d ", j + 1);
                }
            }
        }
    }
}
int main()
{
    char str[101];
    scanf("%[^\n\r]", str);
    findNextWordPosition(str);
    return 0;
}