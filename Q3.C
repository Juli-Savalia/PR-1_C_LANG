#include<stdio.h>
#include<conio.h>
void main()
{
	int a1,a2,a3;
	int AOT=180;
	clrscr();
	printf("enter the value of 1st angle:");
	scanf("%d",&a1);
	printf("enter the value of 2nd angle:");
	scanf("%d",&a2);
	a3=AOT-(a1+a2);
	printf("the value of third angle is =%d",a3);
	getch();
}

