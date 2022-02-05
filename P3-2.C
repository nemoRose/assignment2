#include<stdio.h>
void main()
{
	int choice;
	float yards,miles,feet,inches,kilometer,meter,centimeter;
	clrscr();
	printf("Enter value of miles for conversion:");
	scanf("%f",&miles);
	printf("\nEnter the conversion choice that you want : \n(1) Conversion of miles into yards, feet and inches. \n(2) Conversion of miles into kilometer, meter and centimeter.\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			yards=miles*1760;
			printf("\n%.2f miles = %.2f Yards",miles,yards);
			feet=miles*5280;
			printf("\n%.2f miles = %.2f Feet",miles,feet);
			inches=miles*63360;
			printf("\n%.2f miles = %.2f inches",miles,inches);
			break;
		case 2:
			kilometer=1.609*miles;
			printf("\n%.2f miles = %.2f Kilometer",miles,kilometer);
			meter=16099.34*miles;
			printf("\n%.2f miles = %.2f meter",miles,meter);
			centimeter=1609934.4*miles;
			printf("\n%.2f miles = %.2f Centimeter",miles,centimeter);
			break;
		default:
			printf("\n Invalid choice!!! \n Please choose from any 2 choices.....");
			break;
	}
	getch();
}