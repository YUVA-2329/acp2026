/**A pharmacy requires a digital inventory system to track medications and their expiration years. Design and implement a modular C program to manage this data using a structure that stores a medicine's ID, name,
 * and expiration year. 
 * The system must allow the user to define the number of medicines to be entered, input the data for each record, and display the complete inventory list. To ensure clean coding and professional memory management, the program must use separate functions for memory allocation, data entry, display, and safe deallocation of the array.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[100];
    int year;
} Medicine_t;


Medicine_t* allocate_inventory(int n);
void read_inventory(Medicine_t *m, int n);
void display_inventory(Medicine_t *m, int n);
void delete_inventory(Medicine_t **m);

int main() {
    int n;

    printf("ENTER THE NUMBER OF MEDICINES: ");
    scanf("%d", &n);

    
    Medicine_t *m = allocate_inventory(n);

    if (m == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    
    read_inventory(m, n);

    
    display_inventory(m, n);

    // Free memory
    delete_inventory(&m);

    return 0;
}


Medicine_t* allocate_inventory(int n) {
    return (Medicine_t*)malloc(n * sizeof(Medicine_t));
}


void read_inventory(Medicine_t *m, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of medicine %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &m[i].id);

        printf("Name: ");
        scanf(" %[^\n]", m[i].name);

        printf("Expiration Year: ");
        scanf("%d", &m[i].year);
    }
}


void display_inventory(Medicine_t *m, int n) {
    printf("\n--- MEDICINE INVENTORY ---\n");

    for (int i = 0; i < n; i++) {
        printf("\nMedicine %d\n", i + 1);
        printf("ID: %d\n", m[i].id);
        printf("Name: %s\n", m[i].name);
        printf("Expiration Year: %d\n", m[i].year);
    }
}


void delete_inventory(Medicine_t **m) {
    free(*m);
    *m = NULL;
}