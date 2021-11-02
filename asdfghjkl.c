#include<stdio.h>
int main()
{
	int n,fc=0,rev;
	scanf("%d",&n);
	fc=factorcount(n);
	if(fc==2)
	{
	printf("prime number");
	rev=reverse(n);
	fc=factorcount(rev);
	if(fc==2)
	
	
	{
		printf("circular prime");
	}
	else
	{
		printf(" not circular prime");
	
	}
	}
	else
	{
		printf("not prime");
	}
}
int factorcount(int n)
{
	int i,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	return count;
}
int reverse(int n)
{ 
int r,sum;
while(n!=0)
{
	r=n%10;
	sum=sum*10+r;
	n=n/10;
	
}
 return sum;
}
