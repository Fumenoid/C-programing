#include<stdio.h>
void main()
{
float c,k,f;
printf("Enter the Temprature in Celcius\n");
scanf("%f", &c);
f=(((9*c)/5)+32);
k=273.2+c;
printf("The Temprature in Fahreinheit=%0.2f and in kelvin=%0.2f\n", f, k);
}
