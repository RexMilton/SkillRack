#include <stdio.h>
#include <stdlib.h>

char* reduceCharacterFrequency(char *s, int k)
{
    char *x=malloc(sizeof(char)*1001);
    int d[128]={0},ctr=0;
    for(int i=0;s[i]!='\0';i++){
        if(d[s[i]]<k){
            x[ctr++]=s[i];
            d[s[i]]++;
        }
    }
    return x;
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
