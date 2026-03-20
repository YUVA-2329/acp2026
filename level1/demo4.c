#include <stdio.h>
#include <string.h>

typedef struct {
    int flight_number;
    char destination[50];
    int available_seats;
} Flight_t;

void readFlights(int n, Flight_t f[]);
void searchByDestination(int n, Flight_t f[], char searchDest[]);

int main() {
    int n = 4;
    char searchDest[100];
    Flight_t f[4];

    readFlights(n, f);

    getchar(); // clear buffer before fgets

    printf("ENTER DESTINATION TO SEARCH: ");
    fgets(searchDest, sizeof(searchDest), stdin);

    // remove newline
    searchDest[strcspn(searchDest, "\n")] = 0;

    searchByDestination(n, f, searchDest);

    return 0;
}

void readFlights(int n, Flight_t f[]) {
    int i;

    for(i = 0; i < n; i++) {
        printf("\nENTER FLIGHT NUMBER: ");
        scanf("%d", &f[i].flight_number);

        getchar(); // clear buffer

        printf("ENTER FLIGHT DESTINATION: ");
        fgets(f[i].destination, sizeof(f[i].destination), stdin);

        // remove newline
        f[i].destination[strcspn(f[i].destination, "\n")] = 0;

        printf("ENTER AVAILABLE SEATS: ");
        scanf("%d", &f[i].available_seats);
    }
}

void searchByDestination(int n, Flight_t f[], char searchDest[]) {
    int found = -1;
    int i;

    for(i = 0; i < n; i++) {
        if(strcmp(searchDest, f[i].destination) == 0) {
            found = i;
            break;
        }
    }

    if(found == -1)
        printf("No flight available\n");
    else
        printf("Flight available: %d\n", f[found].flight_number);
}