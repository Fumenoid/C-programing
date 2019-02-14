#include<stdio.h>
int main()
{
int days,years,month,day,rem;
printf("Enter the number of Days \n");
scanf("%d",&days);
years=(int)(days/365);
rem=(days%365);
month=(int)(rem/30);
day=(rem%365);
printf("%d years,%d months,%d Days\n", years, month, day);
return 0;
}
