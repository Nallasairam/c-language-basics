#include<stdio.h>
int main()
{
	int telugu,english,maths,science,social,total;
	float per;
	scanf("%d%d%d%d%d",&telugu,&english,&maths,&science,&social);
	total=telugu+english+maths+science+social;
	per=(total*100/500);
	printf("%f",per);
	if(per>90)
	{
		printf("gradeA");
	}
	else if(per>=80&&per<=90)
	{
		printf("gradeB");
	}
	else if(per>=70&&per<=80)
	{
		printf("gradeC");
	}
	else if(per>=60&&per<=70)
	{
		printf("gradeD");
	}
	else if(per>=50&&per<=60)
	{
		printf("gradeE");
	}
	else
	{
		printf("fail");
	}
	


	
	
}


