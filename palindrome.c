#include<stdio.h>
int main()
{
	int n,t,rev=0,temp;
	printf("enter the no");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		t=n%10;
		rev=rev*10+t;
		n=n/10;
	}
	if(temp==rev)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}
