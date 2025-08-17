#include<stdio.h>
struct student
{
char name[10];
int number;
char address[50];
};
int main()
{
struct student student1;
printf("enter your name : ");
fgets(student1.name,sizeof(student1.name),stdin);
printf("enter your number : ");
scanf("%d",&student1.number);

getchar();

printf("enter your address : ");
fgets(student1.address,sizeof(student1.address),stdin);
printf("student details : \n");
printf("student name : %s",student1.name);
printf("student number : %d\n",student1.number);
printf("student address : %s",student1.address);
return 0;
}