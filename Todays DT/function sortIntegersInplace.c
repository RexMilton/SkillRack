#include<stdlib.h>
#include<stdio.h>
#include<string.h>
char* sortIntegersInplace(char *str)
{
    int a[1001],ctr=0;
    char *s=malloc(sizeof(str)+1);
    strcpy(s,str);
    char *q=strtok(str," ");
    while(q!=NULL){
        printf("%s\n",q);
        if(isdigit(q[0])) a[ctr++]=atoi(q);
        q=strtok(NULL," ");
    }
    for(int i=0;i<ctr;i++){
        for(int j=i+1;j<ctr;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    char *t=strtok(s," ");
    int ctr1=0;
    while(t!=NULL){
        if(isdigit(t[0])) printf("%d ",a[ctr1++]);
        else printf("%s\n",t);
    }
    return "";
}
int main()
{
    char str[101];
    scanf("%[^\n\r]", str);
    char *result = sortIntegersInplace(str);
    if(result == NULL || result == str)
    {
        printf("New string is not formed\n");
    }
    if(result[0] == '\0' || result[0] == ' ')
    {
        printf("String is empty\n");
    }
    printf("%s", result);
    return 0;
}
