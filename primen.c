#include<stdio.h>
int main()
{
int z=0, y, n, x;
printf("Enter the limit till Prime number needed to be checked \n");
scanf("%d", &n);
printf("The prime numbers are: \n");
for(x=2;x<=n;x++)
{
for(y=2;y<=(x/2);y++)
{
if(x%y==0)
{
z++;
}
}
if (z==0)
{
printf("%d ", x);
}
else
{
z=0;
}
}
printf("\n");
return 0;
}
