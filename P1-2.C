#include<stdio.h>
void main()
{
	int hour,daily,week,rate;
	long int year,month;
	clrscr();
	printf("\n Enter the number of hour :");
	scanf("%d",&hour);
	printf("\n Enter the rate for an hour in rs:");
	scanf("%d",&rate);
	daily=hour*rate;
	week=daily*7;
	month=week*4;
	year=month*12;
	printf("\n daily earning: %drs, weekly earning: %drs, monthly earning: %ldrs, annual earning: %ldrs.",daily, week, month, year);
	getch(0);
}