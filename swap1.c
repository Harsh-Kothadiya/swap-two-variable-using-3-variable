//swap two variable using 3 variable
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("\n\n\t ENTER a : ");
	scanf("%d",&a);
	printf("\n\n\t ENTER b : ");
	scanf("%d",&b);
	
	printf("\n\n------BEFORE SWAPPING---------------\n");
	printf("\n\t a : %d",a);
	printf("\n\t b : %d",b);
	
	c=a;
	a=b;
	b=c;
	
	printf("\n\n------AFTER SWAPPING---------------\n");
	printf("\n\t a : %d",a);
	printf("\n\t b : %d",b);
	getch();
}
