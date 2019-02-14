#include<stdio.h>
char n;
void main()
{
printf("Enter any character \n");
scanf("%c", &n);
if((n>=65)&&(n<=90))
{
printf("Alphabet upper case \n");
}
else if((n>=97)&&(n<=122))
{
printf("Alphabet lowe case \n");
}
else if((n>=48)&&(n<=57))
{
printf("Digits \n");
}
else
{
printf("Special characters \n");
}
}
