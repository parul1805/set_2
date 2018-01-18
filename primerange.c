#include<stdio.h>
int main()
{
	int r1,r2,i,j,count=0;
	printf("Enter the Range");
	scanf("%d%d",&r1,&r2);
	for(i=r1+1;i<r2;i++)
	{
		for(j=i;j>0;j--)
		{
			if(i%j==0)
			count++;
		}
		if(count==2)
		printf("%d\t",i);
		count=0;
	}
}
