/*Write a C program to check if the user qualifies 
for a free unit consumption scheme using functions and structure.

Example: If consumption is less than 50 units, the bill is ₹0. (if statement)

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
int main(){
   ElectricityBill bill;
   bill=input();
   bill=calculate_bill( bill);
   output( bill);


}
ElectricityBill input(){
    ElectricityBill bill;
    printf("ENTER THE UNITS CONSUMED\n");
    scanf("%d",&bill.units);
    printf("ENTER THE RATE PER UNIT\n");
    scanf("%f",&bill.rate);
    return bill;

    
}
ElectricityBill calculate_bill(ElectricityBill bill){
    if(bill.units<=50){
        printf("THE NUMBER OF UNITS CONSUMED IS LESS THAN 50 AND IS ELIGIBLE FOR FREE SCHEME");
    bill.total_bill=0;}
    else{

        bill.total_bill=bill.units*bill.rate;

    
    }
    return bill;
}

void output(ElectricityBill bill) {
    printf("\nUnits Consumed: %d\n", bill.units);
    printf("Rate per Unit: %.2f\n", bill.rate);
    printf("Total Bill: %.2f\n", bill.total_bill);
}