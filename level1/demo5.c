#include <stdio.h>

void read_array(int n, int arr[]); 
void print_array(int n, int arr[]); 
void swap_array(int n, int a[], int b[]);

int main(){
    int n = 5;   // keep small for testing
    int arr1[n];
    int arr2[n];

    printf("ENTER ELEMENTS OF FIRST ARRAY:\n");
    read_array(n, arr1);

    printf("ENTER ELEMENTS OF SECOND ARRAY:\n");
    read_array(n, arr2);

    printf("BEFORE SWAPPING:\n");
    printf("Array 1: ");
    print_array(n, arr1);

    printf("Array 2: ");
    print_array(n, arr2);

    swap_array(n, arr1, arr2);

    printf("\nAFTER SWAPPING:\n");
    printf("Array 1: ");
    print_array(n, arr1);

    printf("Array 2: ");
    print_array(n, arr2);

    return 0;
}

void read_array(int n, int arr[]){
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);   // FIXED
    }
}

void print_array(int n, int arr[]){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);  // FIXED
    }
    printf("\n");
}

void swap_array(int n, int a[], int b[]){
    for(int i = 0; i < n; i++){
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}