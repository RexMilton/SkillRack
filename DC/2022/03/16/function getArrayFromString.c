#include <stdio.h>
#include <stdlib.h>

typedef struct BoundedArray
{
    int SIZE;
    int *arr;
} boundedArray;

boundedArray *getArrayFromString(char *str, int k)
{
    boundedArray *new = malloc(sizeof(boundedArray));
    new->SIZE = 0;
    new->arr = malloc(sizeof(int) * 100001);
    for (int i = 0; str[i] != '\0'; i += k)
    {
        char temp[k], string[k];
        int ctr = 0, ctr1 = 0, p = 0;
        for (int j = i; j < i + k; j++)
            temp[ctr++] = str[j];
        while (temp[p] == '0')
            p++;
        for (int j = p; j < ctr; j++)
            string[ctr1++] = temp[j];
        for (int j = 0; j < p; j++)
            string[ctr1++] = '0';
        int x = atoi(string);
        new->arr[new->SIZE++] = x;
    }
    return new;
}
int main()
{
    char str[101];
    int K;
    scanf("%s\n%d", str, &K);
    boundedArray *bArr = getArrayFromString(str, K);
    for (int index = 0; index < bArr->SIZE; index++)
    {
        printf("%d ", bArr->arr[index]);
    }
    return 0;
}
