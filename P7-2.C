
#include<stdio.h>
void main()
{
	char *n1,*n2;
	int sum,num1,num2,sub,mult,div,ch;
	clrscr();
	printf("\nenter the number to be compounded: \n");
	gets(n1);
	gets(n2);
	num1 = atoi(n1);
	num2 = atoi(n2);
	printf("\nEnter the choice:\n 1) sum \n2) subtract\n3) multiply\n4) divide \n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:

			sum=num1+num2;
			printf("\n the sum of charcters is % d",sum);
			break;
		case 2:
			sub=num1-num2;
			printf("\n the subtraction of characters is %d",sub);
			break;
		case 3:
			mult=num1*num2;
			printf("\n the multiplication of characters is %d",mult);
			break;
		case 4:
			div=num1/num2;
			printf("\n the division of characters is %d",div);
			break;

		default:
			printf("\nInvalid choice !!! \n Please choose from 1 to 4.");


	}
	getch();
}