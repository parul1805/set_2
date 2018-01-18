#include<stdio.h>
int main()
{
	int n,p,i,result=1;
	printf("Enter no");
	scanf("%d",&n);
	printf("Enter power");
	scanf("%d",&p);
	for(i=1;i<=p;i++)
	{
		result=result*n;
	}
	printf("%d",result);
}
