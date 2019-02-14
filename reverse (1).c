#include<stdio.h>
int main()
{
int num, rem, k, x, sum=0, m=0;
printf("Enter the number to be reversed\n");
scanf("%d", &num);
k=num;
do
{
m++;
k=k/10;
}
while(k>0);
k=num;
int arr[m-1];
m=0;
do
{
rem=(k%10);
arr[m]=rem;
m++;
k=k/10;
}
while(k>0);
printf("Reversed number \n");
for(x=0;x<m;x++)
{
printf("%d", arr[x]);
}
printf("\n");
return 0;
}
