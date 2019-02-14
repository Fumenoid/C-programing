#include<stdio.h>
char ch;
float c, f, k;
void main()
{
printf("Enter 'c' for Celsius, 'f' for Fahrenheit, 'k' for Kelvin \n");
scanf("%c", &ch);
if(ch=='c')
{
	printf("Enter the Temprature \n");
	scanf("%f", &c);
	f=(((9*c)/5)+32);
	printf("The temprature in Fahrenheit: %0.2f \n", f);
	k=273.2+c;
	printf("The temprature in Kelvin: %0.2f \n", k);
}
else if(ch=='f')
{
	printf("Enter the Temprature \n");
	scanf("%f", &f);
	c=((5*(f-32))/9);
	printf("The temprature in Celsius %0.2f \n", c);
	k=273.2+c;
	printf("The temprature in Kelvin: %0.2f \n", k);
}
else if(ch=='k')
{
	printf("Enter the Temprature \n");
	scanf("%f", &k);
	c=(k-273.2);
	printf("The temprature in Celsius %0.2f \n", c);
	f=(((9*c)/5)+32);
	printf("The temprature in Fahrenheit: %0.2f \n", f);
}
else
{
	printf("Invalid");
}
}
