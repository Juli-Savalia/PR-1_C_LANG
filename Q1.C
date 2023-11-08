#include<conio.h>
#include<stdio.h>
void main()
{
	int cel;
	float F;
	clrscr();
	printf("enter the vakue of degree celsius = ");
	scanf("%d",&cel);
	F=(cel*9/5)+32;
	printf("the conversion of degree celsius to Fahrenhite is = %f",F);
	getch();
}