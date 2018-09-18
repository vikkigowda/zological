#include<stdio.h>
int main()
{
int n,i,sum=0,ch,mul;
printf("enter integer\n");
scanf("%d",&n);
printf("select one choice 1:add 2:mul \n");
scanf("%d",&ch);
switch(ch)
{
case 1:
	for(i=1;i<=n;++i)
	{
		sum+=i;
		printf("sum=%d",sum);
	}
	break;
case 2:
	for(i=1;i<=n;i++)
	{
		mul=mul*i;
		printf("%d\t",i);
	}
	break;
}
}

