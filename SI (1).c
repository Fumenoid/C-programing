#include<stdio.h>
int main()
{
float prin, rate, time,SI;
printf("Enter the Principal\n");
scanf("%f",&prin);
printf("Enter the Rate per annum\n");
scanf("%f",&rate);
printf("Enter the Time(in years)\n");
scanf("%f",&time);
if((prin>=0)&&(rate>=0)&&(time>=0))
{
SI=((prin*time*rate)/100);
printf("The Simple Intrest =%f\n", SI);
}
else
{
printf("INVALID !\n");
}
return 0;
}
