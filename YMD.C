//convert into year,month,days

#include<stdio.h>
#include<conio.h>

void main()
{
	int totaldays,year,month,day;
	clrscr();
	printf("enter totaldays");
	scanf("%d",&totaldays);
	year=totaldays/360;
	month=totaldays/30;
	day=totaldays%30;
	printf("\ntotal year is %d",year );
	printf("\ntotal month is %d",month);
	printf("\ntotal days is %d",day);
	getch();
}