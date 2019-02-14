#include<stdio.h>
int n;
int q=0;
void main()
{
int x;
printf("Enter the number \n");
scanf("%d", &n);
for(x=1;x<=n;x++)
{
if (n%x==0)
{
q++;
}
}
if(q==2)
{
printf("Prime number \n");
}
else if(n==1)
{
printf("Unique number \n");
}
else if(n<=0)
{
printf("Zero or Negative \n");
}
else
{
printf("Not prime \n");
}
}
