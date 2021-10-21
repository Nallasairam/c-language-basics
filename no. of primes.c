#include<stdio.h>
int main()
{
	int n,a,i,f;
	printf("enter the number");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		f=0;
		for(i=1;i<=a;i++)
		{
		if(a%i==0)
		{
	     f++;
     	}
    }
    if(f==2)
    {
    	printf("%d\t",a);
	}

}
}

