//Calculate Gross Salary
#include<stdio.h>
#include<conio.h>
int main()
{
	float bp,da,hra,grpay;
	printf("\nEnter Basic Salary ");
	scanf("%f",&bp);
	da=0.4*bp;//dearness allowance is 40%
	hra=0.2*bp;//House Rent Allowance is 20%
	grpay=bp+da+hra; //Gross Pay=sum of basic & all allowances
	printf("Basic Salary =%f\n",bp);
	printf("Dearness Allowance is =%f\n",da);
	printf("House Rent Allowance is =%f\n",hra);
	printf("Gross pay is =%f\n",grpay);
	getch();
	return(0);
}