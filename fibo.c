#include<stdio.h>
int main()
{
	int i,n,f1=0,f2=1,f3;
	printf("enter number \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	if(i<=1)
	{
		f3=i;
	}
	else
	{
		f3=f1+f2;
		f1=f2;
		f2=f3;
	}
	printf("%d\t",f3);
	}
	}

