#include <stdio.h>
int addNum(int n);

int main()
{
    int num;
    printf("Enter integer: ");
    scanf("%d", &num);
    printf("Sum = %d",addNum(num));
    return 0;
}

int addNum(int n)
{
    if(n != 0)
        return n + addNum(n-1);
    else
        return n;
}
