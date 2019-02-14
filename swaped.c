#include<stdio.h>
int main()
{
int a, b;
printf("Enter the numbers to be swapped \n");
scanf("%d%d",&a,&b);
printf("The number stored in a=%d and in b=%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("After swapping the numbers stored in a=%d and in b=%d\n",a,b);
return 0;
}
