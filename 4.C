//Conversion of temprature from farhrenheit to centigrade
#include<stdio.h>
#include<conio.h>
int main()
{
	float fr,cent;
	printf("\nEnter the temperature(F):");
	scanf("%f",&fr);
	cent=5.0/9.0*(fr-32);
	printf("Temperature in centigrade=%f\n",cent);
	getch();
	return(0);
}