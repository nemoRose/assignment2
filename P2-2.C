#include<stdio.h>
void main()
{
	long int month,days,hour,minutes,seconds,year;
	clrscr();
	printf("\n How old are you : ");
	scanf("%ld",&year);
	month= year*12;
	days= year*365;
	hour=days*24;
	minutes=hour*60;
	seconds=minutes*60;
	printf("\n you age is: %ld years ,%ld months, %ld days, %ld hours, %ld minutes, %ld seconds ",year,month,days,hour,minutes,seconds);
	getch(0);
}