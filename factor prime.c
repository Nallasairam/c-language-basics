#include<stdio.h>
int main()
{
	int i,n,factorcount=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{ 
	if (n%i==0)
		factorcount=factorcount+1;
	
	}
	if (factorcount==2)
	{
		printf("prime number");
	}
	else
	{
		printf("not prime number");
	}
}
