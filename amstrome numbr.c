#include<stdio.h>
int main()
{
	int i,n,r,sum=0,temp,p;
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
	    p=r*r*r;
		sum=sum+p;
		n=n/10;
	}
	if(sum==temp)
	{
		printf("armstrong number");
    }
    else
    {
	printf("not armstrong number");
    }
}
