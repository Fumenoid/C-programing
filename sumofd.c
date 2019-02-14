#include<stdio.h>
void main()
{
int num, rem, k, sum=0;
printf("Enter the number \n");
scanf("%d", &num);
k=num;
while(k>0)
{
rem=(k%10);
sum = sum + rem;
k=(k/10);
}
printf("Sum of digits= %d \n", sum);
}
