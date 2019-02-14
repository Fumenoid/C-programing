#include<stdio.h>
int a, b, c, k;
void main()
{
printf("Enter the three numbers to be compared \n");
scanf("%d%d%d", &a, &b, &c);
k=a;
if((k>=c)&&(k>=b))
{
	printf("The greatest number :%d \n", k);
}
else
{
  k=b;
	if((k>=a)&&(k>=c))
	{
	printf("The greatest number :%d \n", k);
	}
	else
	{
	printf("The greatest number :%d \n", c);
	}
}
}
