#include<stdio.h>
#include<math.h>
int main()
{
	int n,temp,t,count=0,sum=0;
	printf("Enter the No");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		t=n%10;
		count++;
		n=n/10;
	}
	n=temp;
	while(n>0)
	{
		t=n%10;
		sum=sum+pow(t,count);
		n=n/10;
	}
	if(sum==temp)
	printf("Yes");
	else
	printf("No");
}
