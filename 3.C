//Calculation of aggregrate and percentage marks of a student
#include<stdio.h>
#include<conio.h>
int main()
{
	int m1,m2,m3,m4,m5,aggr;
	float per;
	printf("\nEnter marks in 5 subjects out of 100");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	aggr=m1+m2+m3+m4+m5; //Aggregate marks
	per=aggr/5;	//Perctage of total marks     consider max marks 100
	printf("Aggregate Marks=%d\n",aggr);
	printf("Percentage Marks=%f\n",per);
	getch();
	return(0);
}