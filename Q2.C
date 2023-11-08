#include<stdio.h>
#include<conio.h>
void main()
{
	int basesalary,grosssalary;
	float HRA;
	float DA;
	float TA;
	clrscr();
	printf("enter the base salary of a employee");
	scanf("%d",&basesalary);
	HRA=(basesalary*10)/100;
	DA=(basesalary*5)/100;
	TA=(basesalary*8)/100;
	grosssalary=basesalary+(HRA+DA+TA);
	printf("gross salary of a employee is=%d",grosssalary);
	getch();
}
