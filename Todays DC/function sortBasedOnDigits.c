#include <stdio.h>
#include <stdlib.h>
int fun(int x,int y){
    char a[1000],b[1000];
    sprintf(a,"%d",x);
    sprintf(b,"%d",y);
    return strcmp(a,b)>0;
}
void sortBasedOnDigits(int SIZE, int *arr)
{
    for(int i=0;i<SIZE;i++){
        for(int j=i+1;j<SIZE;j++){
            if(fun(arr[i],arr[j])){
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
}
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int index = 0; index < N; index++)
    {
        scanf("%d", &arr[index]);
    }
    sortBasedOnDigits(N, arr);
    for(int index = 0; index < N; index++)
    {
        printf("%d ", arr[index]);
    }
    return 0;
}