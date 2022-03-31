#include <stdio.h>
#include <stdlib.h>
#include <string.h>
double getTotalPrice(char *str)
{
    double sum=0;
    char *q=strtok(str," ");
    char *ptr;
    while(q!=NULL){
        int f=0;
        if(isdigit(q[0])){
            int count=0;
            for(int i=0;q[i]!='\0';i++) if(q[i]=='.') count++;
            if(count>1 && q[strlen(q)-1]=='.') f=1;
            else if(count && q[strlen(q)-1]!='.') f=1;
        }
        if(f) sum+=strtod(q,&ptr);
        q=strtok(NULL," ");
    }
    return sum;
}

int main()
{
    char str[101];
    scanf("%[^\n\r]", str);
    double totalPrice = getTotalPrice(str);
    printf("%.2lf", totalPrice);
    return 0;
}