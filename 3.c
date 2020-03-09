/*elseif*/
#include<stdio.h>
void main()
{
int a,b,c;
printf("enter a,b,cvalues\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("a\n");
else if(b>a&&b>c)
printf("b\n");
else
printf("c\n");
}
