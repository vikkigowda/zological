#include<stdio.h>
long int rev(int n)
{
if(n==0)
return 0;
return 1+rev(n/10);
}
int main()
{
printf("%ld\n",rev(237485654));
}
