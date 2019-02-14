#include<stdio.h>
struct date
{
int day;
char month[20];
int year;
};
struct student_record
{
char name[20];
int sapid;
int rollno;
struct date dob;
struct date dor;
};
int main()
{
int n, x,i=1;
printf("Enter the number of students \n");
scanf("%d", &n);
struct student_record student[n];
printf("\n");
printf("\n");
printf("\n");

for(x=0;x<n;x++)
{
printf("Enter the details of Student %d\n", i);
i++;
printf("Enter the name of student \n");
scanf("\n");
scanf("%[^\n]s", student[x].name);
printf("Enter the sap id of student \n");
scanf("%d", &student[x].sapid);
printf("Enter the roll no of student \n");
scanf("%d", &student[x].rollno);
printf("Enter the date of birth of student \n");
printf("Enter day \t");
scanf("%d", &student[x].dob.day);
printf("Enter month \t");
scanf("%s", student[x].dob.month);
printf("Enter year \t");
scanf("%d", &student[x].dob.year);
printf("Enter date of registration \n");
printf("Enter day \t");
scanf("%d", &student[x].dor.day);
printf("Enter month \t");
scanf("%s", student[x].dor.month);
printf("Enter year \t");
scanf("%d", &student[x].dor.year);
printf("\n");
printf("\n");
printf("\n");
printf("\n");
}
printf("Thank You \n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
i=1;
for(x=0;x<n;x++)
{
printf("The Details of Student %d\n", i);
i++;
printf("The name of student %s\n", student[x].name);
printf("The Sap Id of student %d\n", student[x].sapid);
printf("The roll no of student %d\n", student[x].rollno);
printf("Date of Birth \n");
printf("%d,%s,%d \n", student[x].dob.day, student[x].dob.month, student[x].dob.year);
printf("Date of registration \n");
printf("%d,%s,%d \n", student[x].dor.day, student[x].dor.month, student[x].dor.year);
printf("\n");
printf("\n");
printf("\n");
printf("\n");
}
return 0;
}
