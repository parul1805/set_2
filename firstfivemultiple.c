#include<stdio.h>
int main()
{
	int n,i,mul;
	printf("Enter the no");
	scanf("%d",&n);
	for(i=1;i<=5;i++)
	{
		mul=n*i;
		printf("%d\t",mul);
	}
}
