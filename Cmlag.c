#include<stdio.h>
#include<stdlib.h>
int main(int args, char *argv[])
{
/*
if(args!=5)
{
printf("Argument passed through comand line not equal to 5\n");
return 1;
}
*/

printf("Argument-1 (program name) %s\n", argv[0]);
printf("Argument-2 : %s \n", argv[1]);
printf("Argument-3 : %s \n", argv[2]);
printf("Argument-4 : %s \n", argv[3]);
printf("Argument-5 : %s \n", argv[4]);
printf("Argument-6 : %s \n", argv[5]);
return 0;
}
