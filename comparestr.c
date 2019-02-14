#include<stdio.h>
#include<string.h>
int main()
{
int n, m,l1 ,l2, x,count=0;
printf("Enter the size of the 1st string\n");
scanf("%d", &n);
char s1[n];
printf("Enter the size of the 2nd string\n");
scanf("%d", &m);
char s2[m];
printf("Enter the 1st string\n");
scanf("\n");
scanf("%[^\n]s", s1);
printf("Enter the 2nd string\n");
scanf("\n");
scanf("%[^\n]s", s2);
l1=strlen(s1);
l2=strlen(s2);
if(l1==l2)
 {
  for(x=0;x<l1;x++)
   {
   if(s1[x]==s2[x])
   {
   continue;
   }
   else
   {
   count+=1;
   break;
   }
   }
   if(count==0)
   printf("Equal\n");
   else
   printf("Not equal\n");
 }
else
{
printf("Not equal\n");
}
return 0;
}

