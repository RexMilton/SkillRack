#include <stdio.h>
#include <stdlib.h>
int areConsecutive(char *str)
{
    int ctr=strlen(str);
    for(int i=1;str[i]!='\0';i++){
        char a[1001]={'\0'},b[1001]={'\0'};
        for(int j=0;j<i;j++) a[j]=str[j];
        for(int j=i;str[j]!='\0';j++) b[j-i]=str[j];
        if(b[0]=='0') continue;
        int x=atoi(a),y=atoi(b);
        if(abs(x-y)==1) return 1;
    }
    return 0;
}
int main()
{
    char str[101];
    scanf("%s", str);
    printf("%d", areConsecutive(str));
    return 0;
}