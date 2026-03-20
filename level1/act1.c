/*Write a C program using functions to read the temperature of each day for a week (7 float values), store them in an array,
 and find the minimum and maximum temperature. 
 (array, passing arrays to functions, for loop, if statement)

Function Prototypes:

void inputTemperatures(int n, float temps[n]);

float findHighest(int n, float temps[n]);

float findLowest(int n, float temps[n]);

               void output(float max, float min);*/
// FUNCTIONS PROTOTYPES:
#include <stdio.h>

void inputTemperatures(int n, float temps[n]);

float findHighest(int n, float temps[n]);

float findLowest(int n, float temps[n]);

void output(float max, float min);

int main(){
    int n=7;
    float temps[n];
    inputTemperatures(n,  temps);
    float max;
    float min;
    
 max=findHighest(n, temps);
 min=findLowest( n, temps);
 output(max,  min);


}
void inputTemperatures(int n, float temps[n]){
    for(int i=0;i<n;i++){
        printf("ENTER THE TEMPERATURE OF DAY %d ",i+1);
        scanf("%f", &temps[i]);
    }
}
float findHighest(int n, float temps[n]){
    float max=temps[0];
    for(int i=0;i<n;i++){
        if(temps[i]>max)
        max=temps[i];
    }
    return max;

}
float findLowest(int n, float temps[n]){
    float min=temps[0];
    for(int i=0;i<n;i++){
        if(temps[i]<min)
        min=temps[i];
    }
    return min;
}
 void output(float max, float min){
    printf("MAXIMUM TEMPERATURE IS %f \n ",max);
    printf("MINIMUM TEMPERATURE IS %f \n",min); }