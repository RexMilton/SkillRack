#include <stdio.h>
#include <stdlib.h>

typedef struct BoundedArray
{
    int SIZE;
    int *arr;
} boundedArray;
boundedArray *sort(struct BoundedArray *a)
{
    for (int i = 0; i < a->SIZE; i++)
    {
        for (int j = i + 1; j < a->SIZE; j++)
        {
            if (a->arr[i] > a->arr[j])
            {
                int t = a->arr[i];
                a->arr[i] = a->arr[j];
                a->arr[j] = t;
            }
        }
    }
    return a;
}
boundedArray *getIntegersWithSameEnds(char *s, int k)
{
    boundedArray *new = malloc(sizeof(boundedArray));
    new->arr = malloc(sizeof(int) * 1001);
    new->SIZE = 0;
    int ctr = 0;
    for (int i = 0; s[i + k - 1] != '\0'; i++)
    {
        ctr = 0;
        if (s[i] == s[i + k - 1] && s[i] != '0')
        {
            for (int j = i; j < i + k; j++)
            {
                ctr *= 10;
                ctr += s[j] - '0';
            }
            new->arr[new->SIZE++] = ctr;
        }
    }
    if (new->SIZE == 0)
    {
        new->arr[new->SIZE++] = -1;
        return new;
    }
    new = sort(new);
    return new;
}
int main()
{
    char str[101];
    int K;
    scanf("%s\n%d", str, &K);
    boundedArray *bArr = getIntegersWithSameEnds(str, K);
    if (bArr == NULL)
    {
        printf("Array is not formed\n");
    }
    if (bArr->SIZE <= 0)
    {
        printf("Invalid size for the array\n");
    }
    for (int index = 0; index < bArr->SIZE; index++)
    {
        printf("%d ", bArr->arr[index]);
    }
    return 0;
}