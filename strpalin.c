#include<stdio.h>
#include<string.h>
int main()
{
int n,k,m=0,d,x;
printf("Enter the Number \n");
scanf("%d", &n);
k=n;
while(k>0)
{
k=k/10;
m++;
}
char v[m];
sprintf(v,"%d", n);
char v1[m];
d=(m-1);
for(x=0;x<m;x++)
{
v1[x]=v[d];
d--;
}
printf("Reverse of the number %s\n", v1);
if(strcmp(v,v1)==0)
{
printf("Palindrome \n");
}
else
{
printf("Not Palindrome \n");
}
return 0;
}
