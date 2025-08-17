#include<stdio.h>
struct student
{
char name[10];
int number;
char address[50];
};
int main()
{
int i;

struct student students[5];
for(i=0;i<5;i++)
{
printf("enter your name : ");
fgets(students[i].name,sizeof(students[i].name),stdin);
printf("enter your number : ");
scanf("%d",&students[i].number);
getchar();

printf("enter your address : ");
fgets(students[i].address,sizeof(students[i].address),stdin);
}
for(i=0;i<5;i++)
{
printf("student %d details : \n",i+1);
printf("student name : %s",students[i].name);
printf("student number : %d\n",students[i].number);
printf("student address : %s",students[i].address);
printf("\n");
}

return 0;
}