#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int validateDate(char *dateStr)
{
    int a[3], ctr = 0;
    char *q = strtok(dateStr, "-");
    while (q != NULL)
    {
        a[ctr++] = atoi(q);
        q = strtok(NULL, "-");
    }
    int d = a[0], m = a[1], y = a[2], flag = 0;
    if ((y % 4 == 0 && y % 100) || y % 400 == 0)
        flag = 1;
    if (d > 31 || m > 12)
        return 0;
    else if (flag == 0 && m == 2 && d > 28)
        return 0;
    else if (m != 1 && m != 3 && m != 5 && m != 7 && m != 8 && m != 10 && m != 12)
    {
        if (d > 30)
            return 0;
    }
    else
        return 1;
}
int main()
{
    char dateStr[11];
    scanf("%s", dateStr);
    printf("%d", validateDate(dateStr));
    return 0;
}