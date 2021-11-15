#include<stdio.h>
void main()
{
	int a[100],i,position,n,element;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	 printf("enter the position");
	 scanf("%d",&position);
	 printf("enter the number to insert in a array");
	 scanf("%d",&element);
	 for(i=n-1;i>=position;i--)
	 {
	 	a[i+1]=a[i];
	 }
	 	a[position]=element;
	 n++;
	 for(i=0;i<n;i++)
	 {
	 	printf("a[%d]=%d\n",i,a[i]);
	 }
	 
}
