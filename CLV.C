#include<stdio.h>
#define PI 3.14
void main()
{
	const double r=4;
	int a=5;
	float area;
	char nm[10] = "nimitha";
	clrscr();
	area = PI*r*r;
	printf("%d\n",a);
	printf("%.2f\n",area);
	printf("%s",nm);
	getch();
}
