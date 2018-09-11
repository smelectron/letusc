// Calculation of papersizes A0 to A8
#include<stdio.h>
#include<conio.h>
int main()
{
	int a0h,a1h,a2h,a3h,a4h,a5h,a6h,a7h,a8h;
	int a0w,a1w,a2w,a3w,a4w,a5w,a6w,a7w,a8w;
	a0h=1189;
	a0w=841;
	printf("Size of A0 paper height=%d Width=%d\n",a0h,a0w);
	a1h=a0w;
	a1w=a0h/2;
	printf("Size of A1 paper height=%d width=%d\n",a1h,a1w);
	a2h=a1w;
	a2w=a1h/2;
	printf("Size of A2 paper height=%d width=%d\n",a2h,a2w);
	a3h=a2w;
	a3w=a2h/2;
	printf("Size of A3 paper height=%d width=%d\n",a3h,a3w);
	a4h=a3w;
	a4w=a3h/2;
	printf("Size of A4 paper height=%d width=%d\n",a4h,a4w);
	a5h=a4w;
	a5w=a4h/2;
	printf("Size of A5 paper height=%d width=%d\n",a5h,a5w);
	a6h=a5w;
	a6w=a5h/2;
	printf("Size of A6 paper height=%d width=%d\n",a6h,a6w);
	a7h=a6w;
	a7w=a6h/2;
	printf("Size of A7 paper height=%d width=%d\n",a7h,a7w);
	a8h=a7w;
	a8w=a7h/2;
	printf("Size of A8 paper height=%d width=%d\n",a8h,a8w);
	getch();
	return(0);
}