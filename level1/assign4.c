/*Develop a modular C program to manage a fleet of 4 cars. Use a structure to store vehicle details and implement logic to display only modern vehicles (manufactured after 2022). Create a structure Car with the following members:
•	car_id
•	model_name
•	manufacture_year
•	price
Create an array of 4 cars. The program should read details of 4 cars from the user. Display only those cars manufactured after the year 2022.
Function prototype:
void readCars(int n, Car_t c[]);
void displayModernCars(int n, Car_t c[]);
*/
#include <stdio.h>
typedef struct{
    int car_id;
    char model_name[100];
    int manufacture_year;
    int price;
} Car_t;
void readCars(int n, Car_t c[]);
void displayModernCars(int n, Car_t c[]);
int main(){
    int n=4;
    Car_t c[n];

readCars(n,c);
displayModernCars(n,c);
return 0;


}
void readCars(int n, Car_t c[]){
    int i=0;
    for(i=0;i<n;i++){
printf("ENTER THE CAR_ID  ");
scanf("%d",&c[i].car_id);
printf("ENTER THE MODEL NAME  ");
scanf("%d",&c[i].model_name);

printf("ENTER THE MANUFACTURE YEAR  ");
scanf("%s",c[i].manufacture_year);

printf("ENTER THE PRICE   ");
scanf("%d",&c[i].price);


    }

}
void displayModernCars(int n, Car_t c[]){
int i=0;
for (i=0;i<n;i++)
{
    if(c[i].manufacture_year>2022){
        printf("CAR_ID %d  " ,c[i].car_id );

printf(" MODEL NAME %s  " ,c[i].model_name);


printf(" MANUFACTURE YEAR %d  ", c[i].manufacture_year);

printf(" PRICE %d  ", c[i].price);

    }

}


}