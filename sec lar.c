#include<stdio.h>
void main()
{
	int a[5]={23,42,56,82,97},i,first,second,post;
	for(i=0;i<5;i++)
	
		first=a[0];
		second=a[1];
	if(a[0]>a[1])
		{
			first=a[1];
			second=a[0];
		}
	else
	{
		first=a[0];
		second=a[1];
	}
	for(i=2;i<5;i++)
	{
		if (first<a[i])
		{
		
			second=first;
			first=a[i];
			post=i;
		}
	}
	printf("second largest is %d\n",second);
	printf("position %d\n",post);
}

