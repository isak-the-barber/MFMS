#include <stdio.h>
#include <string.h>
#include "assets.h"

void addAsset(Asset assets[], int *count) {
    if (*count >= MAX_ASSETS) {
        printf("System is full! Cannot add more assets.\n");
        return;
    }

    Asset newAsset;

    printf("Enter Asset ID: ");
    scanf("%d", &newAsset.id);
    getchar();

    printf("Enter Asset Name: ");
    fgets(newAsset.name, sizeof(newAsset.name), stdin);
    newAsset.name[strcspn(newAsset.name, "\n")] = '\0';

    printf("Enter Asset Type: ");
    fgets(newAsset.type, sizeof(newAsset.type), stdin);
    newAsset.type[strcspn(newAsset.type, "\n")] = '\0';

    do {
        printf("Enter Purchase Value: ");
        scanf("%f", &newAsset.purchaseValue);
        if (newAsset.purchaseValue < 0) {
            printf("Purchase value cannot be negative.\n");
        }
    } while (newAsset.purchaseValue < 0);

    getchar();

    printf("Enter Department: ");
    fgets(newAsset.department, sizeof(newAsset.department), stdin);
    newAsset.department[strcspn(newAsset.department, "\n")] = '\0';

    printf("Enter Asset Condition: ");
    fgets(newAsset.condition, sizeof(newAsset.condition), stdin);
    newAsset.condition[strcspn(newAsset.condition, "\n")] = '\0';

    assets[*count] = newAsset;
    (*count)++;

    printf("Asset added successfully!\n");
}

void displayAssets(const Asset assets[], int count) {
    if (count == 0) {
        printf("\nNo assets found in the system.\n");
        return;
    }

    printf("\n--- Asset List ---\n");

    for (int i = 0; i < count; i++) {
        printf("Asset #%d\n", i + 1);
        printf("  ID: %d\n", assets[i].id);
        printf("  Name: %s\n", assets[i].name);
        printf("  Type: %s\n", assets[i].type);
        printf("  Purchase Value: N$%.2f\n", assets[i].purchaseValue);
        printf("  Department: %s\n", assets[i].department);
        printf("  Condition: %s\n", assets[i].condition);
        printf("---------------------\n");
    }
}

void searchAsset(const Asset assets[], int count) {
    if (count == 0) {
        printf("\nNo assets in the system to search.\n");
        return;
    }

    int targetId;

    printf("\nEnter Asset ID to search: ");
    scanf("%d", &targetId);

    int found = 0;

    for (int i = 0; i < count; i++) {
        if (assets[i].id == targetId) {
            printf("\n--- Asset Found ---\n");
            printf("ID: %d\n", assets[i].id);
            printf("Name: %s\n", assets[i].name);
            printf("Type: %s\n", assets[i].type);
            printf("Purchase Value: N$%.2f\n", assets[i].purchaseValue);
            printf("Department: %s\n", assets[i].department);
            printf("Condition: %s\n", assets[i].condition);
            printf("----------------------\n");

            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nAsset with ID %d not found.\n", targetId);
    }
}
