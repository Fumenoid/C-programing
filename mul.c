#include<stdio.h>
int a, b, x;
int m=0;
void main()
{
printf("Enter the two numbers to be multipied \n");
scanf("%d%d", &a, &b);
if((a>=0)&&(b>=0))
{
for(x=1;x<=b;x++)
{
m=m+a;
}
printf("Multiplificaton =%d \n", m);
}
else if(a>=0)
{
b=(b*-1);
for(x=1;x<=b;x++)
{
m=m+a;
}
printf("Multiplificaton =-%d \n", m);
}
else if(b>=0)
{
a=(a*-1);
for(x=1;x<=b;x++)
{
m=m+a;
}
printf("Multiplificaton =-%d \n", m);
}
else
{
b=(b*-1);
a=(a*-1);
for(x=1;x<=b;x++)
{
m=m+a;
}
printf("Multiplificaton =%d \n", m);
}
}
