#include<stdio.h>
#include<string.h>
int a;
int main()
{
printf("Enter the size of the string\n");
scanf("%d", &a);
char v[20];
printf("Enter the string\n");
scanf("\n");
scanf("%[^\n]%*c", v);
int l=strlen(v);
int x, chr=0, dig=0, sp=0;
for(x=0;x<l;x++)
{
if((v[x]>=65)&&(v[x]<=90)||(v[x]>=97)&&(v[x]<=122))
{
chr++;
}
else if((v[x]>=48)&&(v[x]<=57))
{
dig++;
}
else
{
sp++;
}
}
printf("The number of character are %d\n", chr);
printf("The number of digits are %d\n", dig);
printf("The number of special character are %d\n", sp);
return 0;
}
