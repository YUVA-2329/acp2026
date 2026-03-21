/*Write a program to swap two integer arrays.   
Function prototype: 
void read_array(int n, int arr[]); 
void print_array(int n, int arr[]); 
void swap_array(int n, int a[n], int b[n]); */
#include <stdio.h>
void read_array(int n, int arr[]); 
void print_array(int n, int arr[]); 
void swap_array(int n, int a[n], int b[n]);
int main(){
    int n=23;
    int arr1[n];\
        int arr2[n];
    printf("ENTER THE ELEMENTS IN FIRST ARRAY\n");
    read_array(n,arr1);
printf("ENTER THE ELEMENTS IN SECOND ARRAY\n");
    read_array(n,arr2);
    printf("BEFORE SWAPPING FIRST ARRAY  ");
    print_array(n,arr1);
        printf("BEFORE SWAPPING FIRST ARRAY  ");
    print_array(n,arr2);
    swap_array(n,arr1,arr2);

    
}
void read_array(int n, int arr[]){
    int i=0;
    for(i=0;i<n;i++){
  scanf("%d \n",&arr[i]);}
}
void print_array(int n, int arr[]){
    int i=0;
    for(i=0;i<n;i++){
printf("%s \n",arr[i]);}
}
void swap_array(int n, int arr1[n], int arr2[n]){
    int temp[n]=0;
    arr1[n]=arr2[n];
    arr2[n]=temp[n];
    temp[n]=arr1[n];

}
