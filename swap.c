#include<stdio.h>
int a, b;
void main()
{
printf("Enter the Two numbers to be swaped \n");
scanf("%d%d", &a, &b);
printf("The two numbers stored in a and b are respectively %d and %d \n", a, b);
a=a+b;
b=a-b;
a=a-b;
printf("The two numbers after swaping in a and b are respectively %d and %d \n", a, b);
}
