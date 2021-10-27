#include<stdio.h>
int main()
{
	int i=1,n,fact=1,sum=0,r,temp;
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		i=1;
		fact=1;
		while(i<=r)
		{
	
		fact=fact*i;
		i++;
	    }
	    sum=sum+fact;
 	    n=n/10;
    }
    if(sum==temp)
    {
	printf("strong number");
    }
	else
	{
	printf("not strong number");
	}	
}
