#include<stdio.h>
#define PI 3.14  //This a macro which later gets substituted into the code....in preprocessing stage

void main()
{
  //This is an easy code in C to calculate the area and circumference of the circle.
  
float radius, area, circumference;   //variable
  
printf("Enter the radius of circle \n"); 
  
scanf("%f", &radius);  // Getting the radius from the user.
  
area=(PI*radius*radius); // calculating area.
  
printf("The area of the circle is %0.2f \n", area); //printing the area with precission 2.. like 36.21
  
circumference=(2*PI*radius);  //Calculating circumference.
  
printf("The circumference of the circle is %0.2f \n", circumference); //printing it with precission 2.
  
}
