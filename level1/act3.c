/*Write a C program to calculate electricity bills for multiple consumers using array of structures and functions and display the highest bill. (array of structures, for loop, if statement)
typedef struct {
    	int consumerID;
    	float unitsConsumed;
    	float billAmount;
} Bill;
Function Prototypes:
void input(int n, Bill bills[n]);
void calculate_Bills(int n, Bill bills[n]);
int findHighestBillIndex(int n, Bill bills[n]);
void displayHighestBill(int index, Bill bills[]);
*/
#include <stdio.h>
typedef struct {
    	int consumerID;
    	float unitsconsumed;
    	float totalbill;
} Bill;

void input(int n, Bill bills[n]);
void calculate_Bills(int n, Bill bills[n]);
int findHighestBillIndex(int n, Bill bills[n]);
void displayHighestBill(int index, Bill bills[]);
int main(){
	int n=0;
	printf("ENTERR THE NUMBER OF CUSTOMERS");
	scanf("%d",&n);
    Bill bills[n];
	input(n,bills);
	calculate_Bills(n,bills);
	int index;
	index=findHighestBillIndex(n,bills);
	displayHighestBill(index,bills);

}
void input(int n, Bill bills[n]){
int i=0;
for(i=0;i<n;i++){
printf("ENTER THE CONUSUMER NUMBER");
scanf("%d",&bills[i].consumerID);
printf("ENTER THE UNITS CONSUMED");
scanf("%f",&bills[i].unitsconsumed);
bills[i].totalbill=bills[i].unitsconsumed*10;
}
}
void calculate_Bills(int n, Bill bills[n]){
	int i=0;
	for(i=0;i<n;i++){
	bills[i].totalbill=bills[i].unitsconsumed*10;
	}
}
int findHighestBillIndex(int n, Bill bills[n]){
	float max=bills[0].totalbill;
	int index=0;

	int i=0;
	for(i=0;i<n;i++){
		if(bills[i].totalbill>max)
		index=i;
	}
}
void displayHighestBill(int index, Bill bills[]){
	printf("THE HIGHEST BILL IS DONE BY \n CONSUMER ID : %d \n UNITS CONSUMED: %f \n TOTAL BILL : %f ", bills[index].consumerID,bills[index].unitsconsumed,bills[index].totalbill)
;
}