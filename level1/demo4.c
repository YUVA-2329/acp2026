/*Write a modular C program to create a structure Flight with flight_number, 
destination, and available_seats. Create an array of 4 flights. Write a program that 
takes a destination name from the user and checks if a flight is available to that 
location, displaying the flight number if found. 
Function prototype: 
void readFlights(int n, Flight_t f[]);  
void searchByDestination(int n, Flight_t f[], char searchDest[]); */
#include <stdio.h>
#include <string.h>

typedef struct {
    int flight_number;
    char destination[50];
    int available_seats;
} Flight_t;

void readFlights(int n, Flight_t f[]);
void searchByDestination(int n, Flight_t f[], char searchDest[100]);

int main() {
   int n;
   char searchDest[100];
   Flight_t f[4];
    // Read flight details
    readFlights( n, f);

    // Search for flight
    
    printf("ENTER TO SEAR CH BY DESTINATION");
   fgets(searchDest,sizeof(searchDest));
 searchByDestination( n,  f, searchDest[100]);
  

    return 0;
}

void readFlights(int n, Flight_t f[4]) {
    // Write code here to read flight_number, destination and available_seats
    
    int i=0;
 
    for(i=0;i<4;i++){
         printf("ENTER THE FLIGHT NUMBER \n");
    scanf("%d",&f[i].flight_number);
        printf("ENTER FLIGHT DESTINATION ");
   
    fgets( f[i].destination,sizeof(f[i]),stdin);
    printf("ENTER THE AVALIABLE SEATS");
    scanf("%d",&f[i].available_seats);
    }
}

void searchByDestination(int n, Flight_t f[], char searchDest[100]) {
    // Write code here to search flight by destination
    
    int found=-1;
    int i=0;
    for(i=0;i<4;i++){
        if(searchDest[100]==f[i].destination)
        found=i;
        
    }
    

   if(found=-1) 
    printf("No flight available");
    else
    printf("Flight available: %d",f[i].flight_number);
}