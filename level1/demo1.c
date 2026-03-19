/*Write a modular C program to read n float values from the user, store them in an array and find the maximum value and its index. (array, passing arrays to functions, for loop, if statement)
Function prototype:
void input(int n, float arr[n]);
int find_max_index(int n, float arr[n]);
void output(float arr[ ], int max_index);*/
//functions prototype
#include <stdio.h>
void input(int n, float arr[n]);
int find_max_index(int n, float arr[]);
void output(float arr[],int max_index);
int main(){
    int n=0;
    printf("ENTER THE  NUMBER OF ELEMENTS IN THE ARRAY\n");
    scanf("%d",&n);
   float arr[n];
   input(n,arr);
   int max_index;
   max_index=find_max_index(n, arr);
   output(arr,max_index);


}
void input(int n, float arr[n]){
    int i=0;
    for(i=0;i<n;i++){
    printf(
        "ENTER THE ELEMENT IN THE ARRAY OF THE INDEX %d  ",i);
    scanf("%f",&arr[i]);
}
}
int find_max_index(int n, float arr[n]){

    int i=0;
    int max=arr[0];
    int max_index=0;
  for(i=0;i<n;i++){
    if(arr[i]>max)
    max_index=i;


}
return max_index;


}
void output(float arr[],int max_index){
    printf("THE MAXIMUM VALUE IS %f AND ITS INDEX IS %d",arr[max_index],max_index);
}
