#include<stdio.h>
int main()
{ 
   int a=10,b;
   b=++a;
	printf("%d\n%d\n",a,b);
	b=a++;
	printf("%d\n%d\n",a,b);
	b=--a;
	printf("%d\n%d\n",a,b);
	b=a--;
	printf("%d\n%d\n",a,b);
}
