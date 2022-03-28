#include <stdio.h>
#include <stdlib.h>
int main()
{
    int X, Y;
    scanf("%d%d", &X, &Y);
    swapDigitsSameSum(&X, &Y);
    printf("%d %d", X, Y);
    return 0;
} // End of main function



int digit(int x){
    int count=1;
    while(x){
        x/=10;
        count*=10;
    }
    return count;
}
void swapDigitsSameSum(int *ptr1, int *ptr2)
{
    int dx=digit(*ptr1);
    int dy=digit(*ptr2);
    int temp;
    if(dy<dx){
        temp=*ptr1/dy;
        *ptr1%=dy;
        *ptr2=(temp*dy)+*ptr2;
    }
    else{
        temp=*ptr2/dx;
        *ptr2%=dx;
        *ptr1=(temp*dx)+*ptr1;
    }
} // End of swapDigitsSameSum function