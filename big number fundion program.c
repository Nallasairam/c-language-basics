#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d%d",&a,&b,&c);
	d=big(a,b,c);
	printf("%d is the biggest",d);
}
int big( int a,int b,int c)
{
	if(a>b)
	{
		return a;
	}
   else if(b>c)
	{
		return b;
	}
	else
	{
		return c;
	}
}
