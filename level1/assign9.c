#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    float price;
} Product;

void inputProducts(Product p[], int n);
void saveToFile(Product p[], int n, const char *file);
float calculateTotalValue(const char *file);
void displayTotalValue(float total);

int main() {
    int n;

    printf("ENTER THE NUMBER OF PRODUCTS: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Invalid number!\n");
        return 0;
    }

    Product p[n];

    inputProducts(p, n);
    saveToFile(p, n, "inventor.txt");

    float total =0;
    total= calculateTotalValue("inventor.txt");
    displayTotalValue(total);

    return 0;
}

void inputProducts(Product p[], int n) {
    for(int i = 0; i < n; i++) {
        printf("\nENTER PRODUCT %d DETAILS\n", i + 1);

        printf("ENTER ID: ");
        scanf("%d", &p[i].id);

        getchar(); // clear buffer

        printf("ENTER NAME: ");
        //fgets(p[i].name, sizeof(p[i].name), stdin);
        scanf("%[^\n]",p[i].name);
        // remove newline from fgets
        p[i].name[strcspn(p[i].name, "\n")] = 0;

        printf("ENTER PRICE: ");
        scanf("%f",&p[i].price);
    }
}

void saveToFile(Product p[], int n, const char *file) {
    FILE *fp = fopen(file, "w");

    if(fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    for(int i = 0; i < n; i++) {
        fprintf(fp, "%d %s %.2f\n",
                p[i].id,
                p[i].name,
                p[i].price);
    }

    fclose(fp);
    printf("\nData written to file successfully.\n");
}

float calculateTotalValue(const char *file) {
    FILE *fp = fopen(file, "r");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 0;
    }

    int id;
    char name[50];
    float price, total = 0;

    while(fscanf(fp, "%d %s %f", &id, name, &price) != EOF) {
        total += price;
    }

    fclose(fp);
    return total;
}

void displayTotalValue(float total) {
    printf("\nTOTAL STOCK VALUE: ₹%.2f\n", total);
}