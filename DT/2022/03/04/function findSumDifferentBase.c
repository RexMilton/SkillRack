#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int findSumDifferentBase(char *str)
{
    long long int sum = 0;
    char *S = strtok(str, " ");
    while (S)
    {
        int base = 2;
        if (S[0] == 'o' || S[0] == 'O')
        {
            base = 8;
        }
        else if (tolower(S[0]) == 'd')
        {
            base = 10;
        }
        else if (tolower(S[0]) == 'h')
        {
            base = 16;
        }
        long long int num = 0;
        for (int index = 1; S[index]; index++)
        {
            if (isalpha(S[index]))
            {
                S[index] = tolower(S[index]);
                num = num * base + (S[index] - 97 + 10);
            }
            else
            {
                num = num * base + (S[index] - '0');
            }
        }
        sum += num;
        S = strtok(NULL, " ");
    }
    return sum;
}
int main()
{
    char str[1001];
    scanf("%[^\n]", str);
    printf("%d", findSumDifferentBase(str));
    return 0;
}