#include<stdio.h>
void main()
{
int n,k,r,rev=0;
printf("Enter the no. to be reversed \n");
scanf("%d", &n);
k=n;
do
{
r=k%10;
rev=((rev*10)+r);
k=k/10;
}
while(k>0);
printf("Reverse = %d \n", rev);
}

