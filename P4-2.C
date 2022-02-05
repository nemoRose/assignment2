#include<stdio.h>
void main()
{
	float l,b,h,r,sq, rect, tri, circle;
	clrscr();
	printf("enter value of length, breadth, height and radius for calculation of area :");
	scanf("%f %f %f %f", &l, &b, &h, &r);
	printf("\nThe area of shapes are as follows :");
	sq=l*l;
	printf("\n area of square : %f",sq);
	rect=l*h;
	printf("\n area of rectangle : %f",rect);
	tri=0.5*b*h;
	printf("\n area of triangle : %f",tri);
	circle=3.14*r*r;
	printf("\n area of circle : %.2f", circle);
	getch();
}