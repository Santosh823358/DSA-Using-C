// Create a structure Organization with organization name and organization ID as its data

#include <stdio.h>
struct Employee {
    int empID;
    float salary;
    char name[50];
};

struct Organization {
    int orgID;
    char orgName[50];
    struct Employee emp[2];  
};

int main() {
    struct Organization org[2];  

    
    for (int i = 0; i < 2; i++) {
        printf("\nEnter Organization %d ID: ", i+1);
        scanf("%d", &org[i].orgID);
        printf("Enter Organization %d Name: ", i+1);
        scanf(" %[^\n]", org[i].orgName);

        for (int j = 0; j < 2; j++) {
            printf("\nEnter Employee %d ID: ", j+1);
            scanf("%d", &org[i].emp[j].empID);
            printf("Enter Employee %d Name: ", j+1);
            scanf(" %[^\n]", org[i].emp[j].name);
            printf("Enter Employee %d Salary: ", j+1);
            scanf("%f", &org[i].emp[j].salary);
        }
    }

    printf("\n--- Details ---\n");
    for (int i = 0; i < 2; i++) {
        printf("\nOrganization %d: %s (ID: %d)\n", i+1, org[i].orgName, org[i].orgID);
        for (int j = 0; j < 2; j++) {
            printf(" Employee %d -> ID: %d, Name: %s, Salary: %.2f\n",
                   j+1, org[i].emp[j].empID, org[i].emp[j].name, org[i].emp[j].salary);
        }
    }

    return 0;
}
