#include<stdio.h>
int main()
{
	int r1,r2,i;
	printf("Enter the Range");
	scanf("%d%d",&r1,&r2);
	for(i=r1+1;i<r2;i++)
	{
		if(i%2==0)
		printf("%d\t",i);
	}
}
