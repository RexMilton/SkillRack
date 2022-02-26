#include <stdio.h>
#include <stdlib.h>
int main()
{
    int M, N, K;
    scanf("%d %d", &M, &N);
    int arr1[M], arr2[N];
    for (int index = 0; index < M; index++)
    {
        scanf("%d ", &arr1[index]);
    }
    for (int index = 0; index < N; index++)
    {
        scanf("%d ", &arr2[index]);
    }
    scanf("%d", &K);
    printf("%d", findMinMaxInTwoArrays(M, arr1, N, arr2, K));
    return 0;
}
