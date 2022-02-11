#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct time
{
    int hours, minutes, seconds;
} Time;

int main()
{
    Time time1, time2, time3, time4;
    scanf("%d:%d:%d", &time1.hours, &time1.minutes, &time1.seconds);
    scanf("%d:%d:%d", &time2.hours, &time2.minutes, &time2.seconds);
    scanf("%d:%d:%d", &time3.hours, &time3.minutes, &time3.seconds);
    scanf("%d:%d:%d", &time4.hours, &time4.minutes, &time4.seconds);
    printTimeInSeconds(1, time1);
    printTimeInSeconds(2, time1, time2);
    printTimeInSeconds(3, time1, time2, time3);
    printTimeInSeconds(4, time1, time2, time3, time4);
    return 0;
}