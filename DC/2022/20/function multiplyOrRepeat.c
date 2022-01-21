#include <stdio.h>
#include <stdlib.h>

#include <string.h>
char *multiplyOrRepeat(char *str)
{
    char *a = malloc(sizeof(str));
    char *b = malloc(sizeof(str));
    char *s = malloc(sizeof(char) * 1001);
    char *q = strtok(str, "*");
    strcpy(a, q);
    while (q != NULL)
    {
        strcpy(b, q);
        q = strtok(NULL, " ");
    }
    // printf("%s %s",a,b);
    if (isdigit(a[0]) && isdigit(b[0]))
    {
        int x = atoi(a) * atoi(b);
        sprintf(s, "%d", x);
    }
    else
    {
        if (isdigit(a[0]))
        {
            for (int i = 0; i < atoi(a); i++)
            {
                strcat(s, b);
            }
        }
        else
        {
            for (int i = 0; i < atoi(b); i++)
            {
                strcat(s, a);
            }
        }
    }
    return s;
}

int main()
{
    char str[101];
    scanf("%s", str);
    char *result = multiplyOrRepeat(str);
    if (result == NULL || result == str)
    {
        printf("String is not formed\n");
    }
    if (result[0] == '\0' || result[0] == ' ')
    {
        printf("String is empty\n");
    }
    printf("%s", result);
    return 0;
}
