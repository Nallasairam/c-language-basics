#include<stdio.h>
void main()
{
	int a[5]={1,2,3,4,5},i,large,post;
	for(i=0;i<5;i++)
	{
		if (large<a[i])
		{
			large=a[i];
			post=i;
		}
    }
  
        printf("larg number is %d\n",large);
        printf("position is %d\n",post);
  

}
	
