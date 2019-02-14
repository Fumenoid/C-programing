#include<stdio.h>
#define PI 3.14
void main()
{
float radius, area, circumference;
printf("Enter the radius of circle \n");
scanf("%f", &radius);
area=(PI*radius*radius);
printf("The area of the circle is %0.2f \n", area);
circumference=(2*PI*radius);
printf("The circumference of the circle is %0.2f \n", circumference);
}
