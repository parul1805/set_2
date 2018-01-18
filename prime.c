#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("Enter the No");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		if(n%i==0)
		count++;
	}
	if(count==2)
	printf("Yes");
	else
	printf("No");
}
