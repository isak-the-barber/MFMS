#ifndef SUPPLIERS_H
#define SUPPLIERS_H

#define MAX_SUPPLIERS 50
#define MAX_ID_LEN 20
#define MAX_STR_LEN 50 
#define MAX_PHONE_LEN 20 
#define MAX_TOWN_LEN 30

extern char supplier_ids[MAX_SUPPLIERS][MAX_ID_LEN];
extern char supplier_names[MAX_SUPPLIERS]]MAX_STR_LEN];
extern char supplier_emails[MAX_SUPPLIERS][MAX_STR_LEN];
extern char supplier_phones[MAX_SUPPLIERS][MAX_PHONE_LEN];
extern char supplier_towns[MAX_SUPPLIERS][MAX_TOWN_LEN];

extern int supplier_count;

void addSupplier(void);
void displaySuppliers(void);
void searchSupplier(void);
void compareSupplierLocation(void);
void supplierMenu(void);

#endif
