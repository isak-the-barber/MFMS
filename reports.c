#include <stdio.h>
#include "reports.h"

void reportsMenu(){
    int choice;
    printf("\n==== REPORT MENU ====\n");
    printf("1. Show Budget Report\n");
    printf("2. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice == 1){
        generateBudgetReport();
    } else {
        printf("Exiting reports..\n");
    }
}

void generateBudgetReport(){
    char depts[3][20] = {"Accounting", "Marketing", "Human Resources"};
    double allocated[3] = {60000,20000,28000};
    double spent[3] = {55000,21000,23000};
    double remaining[3];
    int i;

    printf("\n--- MUNICIPAL BUDGET REPORT ---\n");

    for(i = 0; i < 3; i++){
        remaining[i] = allocated[i] - spent[i];

        printf("\nDepartment: %s\n", depts[i]);
        printf("Allocated: N$ %.2f\n", allocated[i]),
        printf("Expenditure: N$ %.2f\n", spent[i]);
        printf("Remaining: N$ %.2f\n", remaining[i]);

        if(spent[i] > allocated[i]){
            printf("Status: EXCEEDED BUDGET\n");
        } else {
            printf("Status: WITHIN BUDGET\n");
        }
    }

    printf("\n--- Departments that exceeded ---\n");
    for(i = 0; i < 3; i++){
        if(spent[i] > allocated[i]){
            printf("%s exceeded by N$ %.2f\n", depts[i], spent[i] - allocated[i]);
        }
    }
}
