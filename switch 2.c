#include<stdio.h>
int main()
{
	int length,breadth,side,height,area,c;
	scanf("%d%d%d%d",&length,&breadth,&side,&height);
	scanf("%d",&c);
	switch (c)
	{
		case 1:
		area=side*side;
		printf("%d",area);
		break;
		case 2:
		area=length*breadth;
		printf("%d",area);
		break;
		case 3:
		area=(breadth*height/2);
		printf("%d",area);
		break;
		default:
		printf("invalid input");
	}
}
