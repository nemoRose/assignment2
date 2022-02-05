#include<stdio.h>
void main()
{
	int l,b,area,ans;
	clrscr();
	printf("\n Enter the value of length and width : ");
	scanf("%d %d",&l,&b);
	area=l*b;
	ans=area/9;
	printf("\n The area of the place is %d and it is %d yards", area, ans);
	getch();
}