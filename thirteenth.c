 #include<stdio.h>
float main()
{
float b,h,c,a;
printf("key in the first value");
scanf("%f", &b);
printf("key in the second value");
scanf("%f", &h);
printf("key in the third value");
scanf("%f", &c);
a=1./2.*(b+h)*c;
printf("the input value of b,h and c %.2f%.2f%.2f\n",b,h,c);
printf("the area of a trapezium a=%.2f\n",a);
}

