#include<stdio.h>
#include<stdlib.h>
int max(int a, int b){
    if (a>b) return a;
    else return b;
}
int main()
{
    int r,c,x=0;
    int xd[10001]={0},yd[10001]={0};
    scanf("%d %d",&r,&c);
    int l[r*c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&l[x++]);
            xd[l[x-1]]=i;
            yd[l[x-1]]=j;
        }
    }
    for(int i=0;i<x;i++){
        for(int j=i+1;j<x;j++){
            if(l[i]>l[j]){
                int t=l[i];
                l[i]=l[j];
                l[j]=t;
            }
        }
    }
    int total=0;
    // for(int i=0;i<x;i++) printf("%d ",l[i]);
    for(int i=0;i<x-1;i++){
        total+=max(abs(xd[l[i]]-xd[l[i+1]]),abs(yd[l[i]]-yd[l[i+1]]));
    }
    printf("%d ",total);
}