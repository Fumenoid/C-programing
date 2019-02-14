#include<stdio.h>
float principle, rate, time, si;
void main()
{
printf("Enter the Principle \n");
scanf("%f", &principle);
printf("Enter the Rate (per annum) \n");
scanf("%f", &rate);
printf("Enter the time(in years) \n");
scanf("%f", &time);
if((principle>=0)&&(rate>=0)&&(time>=0))
{
si=((principle*time*rate)/100);
printf("Simple Intrest =%0.2f \n", si);
}
else
{
printf("Invalid \n");
}
}


