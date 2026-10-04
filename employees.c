#include <stdio.h>
#include <string.h>
#include "employees.h"

void addEmployee(Employee employees[], int *count) {
    if (*count >= MAX_EMPLOYEES) {
        printf("System is full! Cannot add more employees.\n");
        return;
    }

    Employee newEmp;

    printf("Enter Employee ID: ");
    scanf("%d", &newEmp.id);
    getchar();

    printf("Enter Employee Name: ");
    fgets(newEmp.name, sizeof(newEmp.name), stdin);
    newEmp.name[strcspn(newEmp.name, "\n")] = 0;

    printf("Enter Position: ");
    fgets(newEmp.position, sizeof(newEmp.position), stdin);
    newEmp.position[strcspn(newEmp.position, "\n")] = 0;

    printf("Enter Salary: ");
    scanf("%f", &newEmp.salary);

    employees[*count] = newEmp;
    (*count)++;

    printf("Employee added successfully!\n");
}void displayEmployees(const Employee employees[], int count) {
    if (count == 0) {
        printf("\nNo employees found in the system.\n");
        return;
    }

    printf("\n--- Employee List ---\n");
    for (int i = 0; i < count; i++) {
        printf("Employee #%d\n", i + 1);
        printf("  ID: %d\n", employees[i].id);
        printf("  Name: %s\n", employees[i].name);
        printf("  Position: %s\n", employees[i].position);
        printf("  Salary: $%.2f\n", employees[i].salary);
        printf("---------------------\n");
    }
}void searchEmployee(const Employee employees[], int count) {
    if (count == 0) {
        printf("\nNo employees in the system to search.\n");
        return;
    }

    int targetId;
    printf("\nEnter Employee ID to search: ");
    scanf("%d", &targetId);

    int found = 0;
    for (int i = 0; i < count; i++) {
        if (employees[i].id == targetId) {
            printf("\n--- Employee Found ---\n");
            printf("  ID: %d\n", employees[i].id);
            printf("  Name: %s\n", employees[i].name);
            printf("  Position: %s\n", employees[i].position);
            printf("  Salary: $%.2f\n", employees[i].salary);
            printf("----------------------\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nEmployee with ID %d not found.\n", targetId);
    }
}
void searchEmployee(const Employee employees[], int count) {
    int searchId;
    printf("Enter Employee ID to search: ");
    scanf("%d", &searchId);

    int found = 0;
    for (int i = 0; i < count; i++) {
        if (employees[i].id == searchId) {
            printf("\n--- Employee Found ---\n");
            printf("ID: %d\n", employees[i].id);
            printf("Name: %s\n", employees[i].name);
            printf("Position: %s\n", employees[i].position);
            printf("Salary: $%.2f\n", employees[i].salary);
            printf("----------------------\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Employee with ID %d not found.\n", searchId);
    }
}