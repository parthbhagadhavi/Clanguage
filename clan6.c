#include <stdio.h>
#include <stdlib.h>

#define MAX_EMPLOYEES 3

struct Employee {
    char name[100];
    char role[100];
};

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    FILE *fp;
    int i;

 
    fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter details for %d employees:\n", MAX_EMPLOYEES);
    for (i = 0; i < MAX_EMPLOYEES; i++) {
        printf("\nEmployee %d\n", i + 1);


        printf("Name: ");
        scanf(" %[^\n]s", employees[i].name);


        printf("Role: ");
        scanf(" %[^\n]s", employees[i].role); 

 
        fprintf(fp, "Employee %d\n", i + 1);
        fprintf(fp, "Name: %s\n", employees[i].name);
        fprintf(fp, "Role: %s\n\n", employees[i].role);
    }

    fclose(fp);

    printf("\nData has been written to data.txt successfully.\n");

    return 1;
}