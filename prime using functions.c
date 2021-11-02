#include<stdio.h>
int factcount(int);
int main()
{
	int i,n,factcoun,fc;
	scanf("%d",&n);
	fc=factcount(n);
	if (fc==1)
	{
		
		printf("prime number");
	}
	else 
	{
	 printf("not prime number");
    }
}
int factcount(int n)
{
	int i,factcount=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	 return 1;
}
