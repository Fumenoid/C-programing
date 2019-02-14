#include<stdio.h>
#include<string.h>
int l;
char s[1000];
void check()
{
static int count=0;
static int x=0;
if(x<l)
 {
 if(s[x]==32)
 {
  count+=1;
 }
 x+=1;
 check();
 }
 else
 {
 printf("No of words in the string =%d\n", (count+1));
 }
}
int main()
{
printf("Enter a string\n");
scanf("%[^\n]s", s);
l=strlen(s);
check();
return 0;
}
