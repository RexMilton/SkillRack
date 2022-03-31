#include <stdio.h>
#include <stdlib.h>
void sort(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}
void maximizeInteger(int M, int arr1[M], int N, int arr2[N])
{
    int ctr=0;
    sort(arr2,N);
    for(int i=0;i<M;i++){
        if(arr1[i]<arr2[ctr]){
            arr1[i]=arr2[ctr++];   
        }
    }
}


int main()
{
    int M, N;
    scanf("%d", &M);
    int arr1[M];
    for(int index = 0; index < M; index++)
    {
        scanf("%d", &arr1[index]);
    }
    scanf("%d", &N);
    int arr2[N];
    for(int index = 0; index < N; index++)
    {
        scanf("%d", &arr2[index]);
    }
    maximizeInteger(M, arr1, N, arr2);
    for(int index = 0; index < M; index++)
    {
        printf("%d ", arr1[index]);
    }
    return 0;
}