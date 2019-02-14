#include<stdio.h>
void main()
{
int x,y,l;
printf("Enter the no of columns and rows \n");
scanf("%d", &l);
for(x=1;x<=l;x++)
{
for(y=1;y<=l;y++)
{
printf("%d", x);
}
printf("\n");
}
}
