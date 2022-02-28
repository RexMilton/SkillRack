#include <stdio.h>
#include <stdlib.h>
int findMinMaxInTwoArrays(int l1, int a1[], int l2, int a2[], int k)
{
    int x = 0, y = 0;
    for (int i = 0; i < l1; i++)
        if (a1[i] > k)
            x++;
    for (int i = 0; i < l2; i++)
        if (a2[i] < k)
            y++;
    return x > y ? x : y;
}

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
