#include<stdio.h>
int perfect(int);
void main()
{
	int n,i,res=0;
	scanf("%d",&n);
	res=perfect(n);
	if(res==n)
	{
		printf("perfectnumber");
	}
	else
	{
		printf("not perfect");
	}
}
int perfect(int m)
{
	int i,sum=0;
	for(i=1;i<m;i++)
	{
		if(m%i==0)
		{
			sum=sum+i;
		}
	}
	return sum;
}
