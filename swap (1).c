#include<stdio.h>
int main()
{
int a, b, c;
printf("Enter the numbers to be swapped \n");
scanf("%d%d",&a,&b);
printf("The number stored in a=%d and in b=%d\n",a,b);
c=a;
a=b;
b=c;
printf("After swapping the numbers stored in a=%d and in b=%d\n",a,b);
return 0;
}
