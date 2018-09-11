//Calculation of area & perimeter of rectangle and circle
#include<stdio.h>
#include<conio.h>
int main()
{
	int l,b,r,area1,perimeter;
	float area2=0,circum=0,pi=3.14;
	printf("Enter Length and Breadth of Rectangle");
	scanf("%d%d",&l,&b);
	area1=l*b;//area of rectangle
	perimeter=2*l+2*b;//perimeter of a rectangle
	printf("Area of Rectangle=%d\n",area1);
	printf("Perimeter of Rectangle=%d\n",perimeter);
	printf("\n\nEnter Radius of circle");
	scanf("%d",&r);
	area2=pi*r*r; //Area of Circle
	circum=2*pi*r; //Circumference of a circle
	printf("Area of circle=%f\n",area2);
	printf("Circumference of circle=%f\n",circum);
	getch();
	return(0);
}