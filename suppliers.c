#include <stdio.h>
#include <string.h>
#include "suppliers.h"

char supplier_ids[MAX_SUPPLIERS][MAX_ID_LEN];
char supplier_names[MAX_SUPPLIERS][MAX_STR_LEN];
char supplier_emails[MAX_SUPPLIERS][MAX_STR_LEN];
char supplier_phones[MAX_SUPPLIERS][MAX_PHONE_LEN];
char supplier_towns[MAX_SUPPLIERS][MAX_TOWN_LEN];
int supplier_count = 0;

void addSupplier(void) {
    if (supplier_count >= MAX_SUPPLIERS) {
        printf("Error: Supplier registry is full.\n");
        return;
    }

    printf("Enter Supplier ID: ");
    scanf("%19s", supplier_ids[supplier_count]);

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

    supplier_count++;
    printf("Supplier added successfully.\n");
}

void displaySuppliers(void) {
    if (supplier_count == 0) {
        printf("No suppliers registered yet.\n");
        return;
    }

    printf("\nRegistered Suppliers:\n");
    for (int i = 0; i < supplier_count; i++) {
        printf("\nSupplier %d:\n", i + 1);
        printf("ID: %s\n", supplier_ids[i]);
        printf("Name: %s\n", supplier_names[i]);
        printf("Email: %s\n", supplier_emails[i]);
        printf("Phone: %s\n", supplier_phones[i]);
        printf("Location: %s\n", supplier_towns[i]);
        printf("\n");
    }
}

void searchSupplier() {
    if (supplierCount == 0) {
        printf("No suppliers to search.\n");
        return;
    }

    char search_id[MAX_ID_LEN];
    printf("Enter Supplier ID to search: ");
    scanf("%19s", searchId);

    int found = 0;
    for (int i = 0; i < supplier_count; i++) {
        if (strcmp(supplier_ids[i], search_id) == 0) {
            printf("\nSupplier Found:\n");
            printf("ID: %s\n", supplier_ids[i]);
            printf("Name: %s\n", supplier_names[i]);
            printf("Email: %s\n", supplier_emails[i]);
            printf("Phone: %s\n", supplier_phones[i]);
            printf("Location: %s\n", supplier_towns[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Supplier with ID %s not found.\n", search_id);
    }
}

void compareSuppliersLocation(void) {
    if (supplier_count < 2) {
        printf("Need at least 2 suppliers to compare locations.\n");
        return;
    }

    char search_location[MAX_TOWN_LEN];
    printf("Enter Town or Location to search: ");
    scanf(" %29[^\n]",search_location);

    printf("\nSuppliers located in %s:\n", search_location);
    int match_count = 0;
    for (int i = 0; i < supplier_count; i++) {
        if (strcmp(supplier_towns[i], search_location) == 0) {
            printf("- %s (ID: %s, Phone: %s)\n", supplier_names[i], supplier_ids[i], supplier_phones[i]);
            match_count++;
        }
    }

    if (match_count == 0) {
        printf("No suppliers found in that location.\n");
    }
}

void supplierMenu(void) {
    int choice;
    do {
        printf("\n=====SUPPLIER MANAGEMENT MENU=====\n");
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
