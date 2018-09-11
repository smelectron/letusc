//Conversion of Distance
#include<stdio.h>
#include<conio.h>
int main()
{
	 float km,m,cm,ft,inch;
	 printf("\nEnter the distance in kilometers");
	 scanf("%f",&km);
	 m=km*1000;   //kilometer to meter
	 cm=m*100;	//kilometer to centimeter
	 inch=cm/2.54; //kilometer to inches
	 ft=inch/12;	//kilometer to feets
	 printf("Distance in Meter=%f\n",m);
	 printf("Distance in Centimeter=%f\n",cm);
	 printf("Distance in feet=%f\n",ft);
	 printf("Distance in inches=%f\n",inch);
	 getch();
	 return(0);
}
