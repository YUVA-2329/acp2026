/*Write a C program using functions to read the marks (float) obtained by n students in a test,
 store them in an array, and find the highest and lowest mark scored.
  (array, passing arrays to functions, for loop, if statement)
Function Prototypes:
void inputMarks(int n, float marks[n]);
float findHighestMark(int n, float marks[n]);
float findLowestMark(int n, float marks[n]);
void output(float max, float min);
*/
#include <stdio.h>

void inputMarks(int n, float marks[n]);
float findHighestMark(int n, float marks[n]);
float findLowestMark(int n, float marks[n]);
void output(float max, float min);
int main(){
    int n;
    printf("ENTER THE NUMBER OF STUDENTS");
    scanf("%d",&n);
    float marks[n];
    inputMarks(n,marks);
    float high=findHighestMark(n,marks);
    float low=findLowestMark(n,marks);
    output(high,low);
    
}

void inputMarks(int n, float marks[n]){

    int i=0;
    for(i=0;i<n;i++){
        printf("ENTER THE DETAILS OF %d STUDENT ",i);
        scanf("%d\n",&marks[i]);
    }
}
float findHighestMark(int n, float marks[n]){
    int i=0;
    float max=marks[0];
  for(i=0;i<n;i++){
    if(marks[i]>max)
    max=marks[i];
    }
    return max;


}
float findLowestMark(int n, float marks[n]){
    int i=0;
    float min=marks[0];
  for(i=0;i<n;i++){
    if(marks[i]<min)
    min=marks[i];
    }
    return min;
}
void output(float max, float min){
printf("HIGHEST MARKS %d \n " ,max);
printf("LOWEST MARKS %d \n",min);

}