#include<stdio.h>
typedef struct student
{
 int marks;
}math;
void add(math *m1,math *m2,math *m3)
{
int total=m1->marks+m2->marks+m3->marks;
printf("Total Marks=%d\n", total);

}
int main()
{
math stud1;
printf("Enter marks of student1\n");
scanf("%d", &stud1.marks);

math stud2;
printf("Enter marks of student2\n");
scanf("%d", &stud2.marks);

math stud3;
printf("Enter marks of student3\n");
scanf("%d", &stud3.marks);

 

add(&stud1,&stud2,&stud3);

}
