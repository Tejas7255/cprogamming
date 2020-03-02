#include<stdio.h>
void main()
{
int a,b,c;
int ch;
printf("enter values of a and b");
scanf("%d%d",&a,&b);
printf("enter character");
scanf("%d",&ch);
switch(ch)
{
case 1:c=a+b;printf("sum=%d",c);
case 2:c=a-b;printf("subtraction=%d",c);
case 3:c=a*b;printf("multiplicaton=%d",c);
default:printf("invalid operator");
}
}
