#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,r1,r2,rp,imp;
printf("The standard equationof a quardatic equation = ax2+bx+c,so enter a,b and c\n");
scanf("%f%f%f", &a, &b,&c);
if(a!=0)
{
d=((b*b)-(4*a*c));
if(d>=0)
{
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
printf("The roots of quardatic equation are %0.3f and %0.3f\n",r1,r2);
}
else
{
rp=(-b/(2*a));
imp=sqrt(-d)/(2*a);
printf("The roots of quardatic equation are %0.3f+i%0.3f\n",rp,imp);
printf("The roots of quardatic equation are %0.3f-i%0.3f\n",rp,imp);
}
}
else
{
printf("Invalid!,LinearEquaton\n");
}
return 0;
}
