#include <stdio.h>
#include <string.h>
#include "suppliers.h"

char supplierIds[MAX_SUPPLIERS][MAX_STR_LEN];
char supplierNames[MAX_SUPPLIERS][MAX_STR_LEN];
char supplierEmails[MAX_SUPPLIERS][MAX_STR_LEN];
char supplierPhones[MAX_SUPPLIERS][MAX_STR_LEN];
char supplierLocations[MAX_SUPPLIERS][MAX_STR_LEN];
int supplierCount = 0;

void addSupplier() {
    if (supplierCount >= MAX_SUPPLIERS) {
        printf("Error: Supplier registry is full.\n");
        return;
    }

    printf("Enter Supplier ID: ");
    scanf("%s", supplierIds[supplierCount]);

    if (strlen(supplierIds[supplierCount]) == 0) {
        printf("Invalid ID. Cannot be empty.\n");
        return;
    }

    printf("Enter Supplier Name: ");
    scanf(" %[^
]s", supplierNames[supplierCount]);

    printf("Enter Supplier Email: ");
    scanf("%s", supplierEmails[supplierCount]);

    printf("Enter Supplier Telephone: ");
    scanf("%s", supplierPhones[supplierCount]);

    printf("Enter Town or Location: ");
    scanf(" %[^
]s", supplierLocations[supplierCount]);

    supplierCount++;
    printf("Supplier added successfully.\n");
}

void displaySuppliers() {
    if (supplierCount == 0) {
        printf("No suppliers registered yet.\n");
        return;
    }

    printf("Registered Suppliers:\n");
    for (int i = 0; i < supplierCount; i++) {
        printf("Supplier %d:\n", i + 1);
        printf("ID: %s\n", supplierIds[i]);
        printf("Name: %s\n", supplierNames[i]);
        printf("Email: %s\n", supplierEmails[i]);
        printf("Phone: %s\n", supplierPhones[i]);
        printf("Location: %s\n", supplierLocations[i]);
        printf("\n");
    }
}

void searchSupplier() {
    if (supplierCount == 0) {
        printf("No suppliers to search.\n");
        return;
    }

    char searchId[MAX_STR_LEN];
    printf("Enter Supplier ID to search: ");
    scanf("%s", searchId);

    int found = 0;
    for (int i = 0; i < supplierCount; i++) {
        if (strcmp(supplierIds[i], searchId) == 0) {
            printf("Supplier Found:\n");
            printf("ID: %s\n", supplierIds[i]);
            printf("Name: %s\n", supplierNames[i]);
            printf("Email: %s\n", supplierEmails[i]);
            printf("Phone: %s\n", supplierPhones[i]);
            printf("Location: %s\n", supplierLocations[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Supplier with ID %s not found.\n", searchId);
    }
}

void compareSuppliers() {
    if (supplierCount < 2) {
        printf("Need at least 2 suppliers to compare locations.\n");
        return;
    }

    char searchLoc[MAX_STR_LEN];
    printf("Enter Town or Location to filter and compare: ");
    scanf(" %[^
]s", searchLoc);

    printf("Suppliers located in %s:\n", searchLoc);
    int matchCount = 0;
    for (int i = 0; i < supplierCount; i++) {
        if (strcmp(supplierLocations[i], searchLoc) == 0) {
            printf("- %s (ID: %s, Phone: %s)\n", supplierNames[i], supplierIds[i], supplierPhones[i]);
            matchCount++;
        }
    }

    if (matchCount == 0) {
        printf("No suppliers found in that location.\n");
    }
}

void supplierMenu() {
    int choice;
    do {
        printf("Supplier Management Menu\n");
        printf("1. Add Supplier\n");
        printf("2. Display Suppliers\n");
        printf("3. Search Supplier\n");
        printf("4. Compare/Search by Location\n");
        printf("5. Back to Main Menu\n");
        printf("Enter choice: ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); // Clear buffer
            choice = 0;
            continue;
        }

        switch (choice) {
            case 1: addSupplier(); break;
            case 2: displaySuppliers(); break;
            case 3: searchSupplier(); break;
            case 4: compareSuppliers(); break;
            case 5: printf("Returning to main menu...\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }
    } while (choice != 5);
}
