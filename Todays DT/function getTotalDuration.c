#include <stdio.h>
#include <stdlib.h>

struct Duration
{
    int days;
    int hours;
    int minutes;
    int seconds;
};

struct Duration *getTotalDuration(char *str)
{
}
int main()
{
    char str[1001];
    scanf("%[^\n]", str);
    struct Duration *duration = getTotalDuration(str);
    if (duration == NULL)
    {
        printf("Duration is not formed\n");
    }
    printf("%d %d %d %d", duration->days, duration->hours, duration->minutes, duration->seconds);
    return 0;
}
