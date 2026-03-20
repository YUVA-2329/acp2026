/*(a)    Write a C program to check if the electricity units consumed exceed 100 using functions and structure. If they do, apply an extra charge of ₹5 per unit over 100 and display a warning message “High consumption alert! Extra charge applied”. (if statement)

typedef struct {

int units;

float rate;

float total_bill;

} ElectricityBill;

Function Prototypes:

ElectricityBill input();

ElectricityBill calculate_bill(ElectricityBill bill);

void output(ElectricityBill bill);*/

#include <stdio.h>
typedef struct {

int units;

float rate;

float total_bill;

} ElectricityBill;


ElectricityBill input();
ElectricityBill calculate_bill(ElectricityBill bill);
void output(ElectricityBill bill);

int main() {
    ElectricityBill bill;
    bill=input();
    bill=calculate_bill(bill);
    output(bill);
    return 0;
}

ElectricityBill input() {
   ElectricityBill bill;

    printf("Enter units consumed: ");
    scanf("%d",&bill.units);
   

    printf("Enter rate per unit: ");
    scanf("%f",&bill.rate);
    return bill;
   
   
}

ElectricityBill calculate_bill(ElectricityBill bill) {
    bill.total_bill = bill.units * bill.rate;
if (bill.units > 100) {
        int extra_units = bill.units - 100;
        bill.total_bill += extra_units * 5;

        printf("High consumption alert! Extra charge applied.\n");
    }
        return bill;
 
}

void output(ElectricityBill bill) {
    printf("Units Consumed: %d\n", bill.units);
    printf("Rate per Unit: %.2f\n", bill.rate);
    printf("Total Bill: %.2f\n", bill.total_bill);
}