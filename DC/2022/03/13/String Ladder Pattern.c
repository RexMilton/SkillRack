#include<stdio.h>
#include<stdlib.h>
int l2;
int print(char x){
    printf("%c",x);
    for(int i=0;i<l2;i++) printf("*");
    printf("%c\n",x);
}
int main(){
    char s1[1001],s2[1001];
    scanf("%s\n%s",s1,s2);
    int n,f=0,l1=strlen(s1);
    l2=strlen(s2)-2;
    scanf("%d",&n);
    print(s1[0]);
    for(int i=0;i<n+1;i++){
        if(f){
            for(int j=l1-2;j>0;j--) print(s1[j]);
            f=0;
            if(i==n) print(s1[0]);
        }
        else{
            for(int j=1;j<l1-1;j++) print(s1[j]);
            f=1;
            if(i==n) print(s1[l1-1]);
        }
        if(i<n) printf("%s\n",s2);
    }
}