// Write aprogram in C to implement pointers to Structures.

#include <stdio.h>
struct Student {
    char name[50];
    int age;
    float grade;
};

int main() {
    struct Student student1 = {"John Doe", 20, 89.5};
    struct Student *ptr;
    ptr = &student1;
    printf("Student Name: %s\n", ptr->name);   
    printf("Student Age: %d\n", ptr->age);     
    printf("Student Grade: %.2f\n", ptr->grade);  

    return 0;
}
