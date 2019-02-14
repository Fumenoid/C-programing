#include<stdio.h>
int main()
{
int n, k, rem, rev=0;
printf("Enter the number \n");
scanf("%d", &n);
k=n;
while (k>0)
{
rem=(k%10);
rev=(rev*10)+rem;
k=k/10;
}
if (rev==n)
{
printf("The number is palindrome !\n");
}
else
{
printf("The number isn't palindrome !\n");
}
}
