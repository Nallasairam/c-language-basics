#include<stdio.h>
int main()
{
	int i,n,evencount=0,oddcount=0,r,digitcount=0;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(r%2==0)
		{
			evencount=evencount+1;
		}
		else
		{
			oddcount=oddcount+1;
		}
		digitcount=digitcount+1;
		n=n/10;
	}
	if(digitcount==evencount)
	{
	
	printf("strong even");
    }
    else if (digitcount==oddcount)
    {
    printf("strong odd");
	}
	else
	printf("mixed");
}

