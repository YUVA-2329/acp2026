/*Write a C program using array of structures and functions to:
i.Accept the number of rectangles.
ii.For each rectangle, accept its length and width.
iii.Calculate and display the area of each rectangle.
iv.Determine and display the rectangle with the largest area. (array of structures, for loop, if statement)
typedef struct {
    	float length;
    	float width;
    	float area;
} Rectangle;
Function prototype:
void input(int n, Rectangle rects[n]);
void calculate_area(int n, Rectangle rects[n]);
  int findLargestArea(int n, Rectangle rects[n]);
void output(int largestIndex, Rectangle rects[]);*/


//function declaration:
#include <stdio.h>
typedef struct {
    float length;
    	float width;
    	float area;
    
}Rectangle;
void input(int n, Rectangle rects[n]);
void calculate_area(int n, Rectangle rects[n]);
int findLargestArea(int n, Rectangle rects[n]);
void output(int largest, Rectangle rects[]);
int main(){
    int n=0;
    printf("ENTER THE NUMBER OF RECTANGLES..");
    scanf("%d",&n);
    Rectangle rects[n];
    input(n,rects);
    calculate_area(n,rects);
    int largest;
    largest=findLargestArea(n,rects);
    output(largest,rects);


}
void input(int n, Rectangle rects[n]){
    int i=0;
    for(i=0;i<n;i++){
printf("ENTER THE DETAILS OF %d RECTANGLE\n",i+1);
    printf("ENTER THE LENGTH   ");
    scanf("%f",&rects[i].length);
    printf("ENTER THE WIDTH   ");
    scanf("%f",&rects[i].width);
}
}
void calculate_area(int n,Rectangle rects[]){
    int i=0;
    for(i=1;i<=n;i++){
        rects[i].area=rects[i].length*rects[i].width;
    }
    
}
 int findLargestArea(int n, Rectangle rects[n]){
    int i=0;
    int max=0;
    for(i=1;i<=n;i++){
        if (rects[i].area>rects[max].area)
        max=i;
    }
    return max;
 }
void output(int largest, Rectangle rects[]){

    printf("THE %d RECTANGLE WITH LARGEST AREA of %f  ",largest+1,rects[largest].area);
}
