#include<stdio.h>
int main()
{
float a, b;
printf("Enter two numbers \n");
scanf("%f%f", &a, &b);
int sum =(int)(a + b);
int sub;
if(a>b)
{
sub =(int) (a - b);
}
else
{
sub = (int)(b - a);
}
int mul = (int)(a * b) ;
float div = (a/b) ;
printf("Sum of two numbers=%d \n", sum);
printf("Difference of two numbers=%d \n", sub);
printf("Product of two numbers=%d \n", mul);
printf("Quotient of two numbers=%f \n", div);
return 0;
}
