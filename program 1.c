#include<stdio.h>
int main()
{
	int s,r,n;
	scanf("%d",&n);
	while(n!=0)
	{
       r=n%10;
	   n=n/10;
	}
	   	printf("%d",r);
    	printf("%d",n);
	
}
	 
