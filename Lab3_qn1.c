//  Write a program in C to implement arrays of pointers and pointers to arrays.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    int i;

    char *names[3];
    char buffer[100];

    printf("Enter 3 names:\n");
    for(i=0;i<3;i++) {
        printf("Name %d:", i+1);
        scanf("%s", buffer);

        names[i] = malloc(strlen(buffer) + 1);
        strcpy(names[i], buffer);

    }

    printf("\nYou enterd these names:\n");

    for(i = 0; i <3; i++) {
        printf("names[%d]: %s\n", i, names[i]);
    }

    int numbers[5];
    int(*ptr_to_array)[5] = &numbers;

    printf("\nEnter five integers:\n");
    for(i=0; i<5;i++) {
        printf("Number%d: ", i+1);
        scanf("%d",&(*ptr_to_array)[i]);

    }

    printf("\nYou entered these numbers:\n");
    for(i=0;i<5;i++) {
        printf("(*ptr_to_array)[%d]:%d\n",i,(*ptr_to_array)[i]);
    }

    for(i=0;i < 3; i++) {
        free(names[i]);
    }
    return 0;

}

