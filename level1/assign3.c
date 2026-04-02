/*Write a C program using functions and array of structures to calculate the tiling cost for multiple floors and display the floor that has the highest total tiling cost. (array of structures, for loop, if statement)
typedef struct {
    	float length;
    	float width;
    	float area;
    	float costPerUnit;
    	float totalCost;
} Floor;
Function Prototypes:
void inputDetails(int n, Floor floors[n]);
void calculateCosts(int n, Floor floors[n]);
void highestCostFloor(int n, Floor floors[n]);
void displayHighestCost(int index, Floor floors[]);
*/
#include <stdio.h>
typedef struct {
    	float length;
    	float width;
    	float area;
    	float costPerUnit;
    	float totalCost;
} Floor;
void inputDetails(int n, Floor floors[n]);
void calculateCosts(int n, Floor floors[n]);
int highestCostFloor(int n, Floor floors[n]);
void displayHighestCost(int index, Floor floors[]);
int main(){
	int n;
	printf("ENTER THE NUMBER OF FLOORS");
	scanf("%d",&n);
  Floor floors[n];
  inputDetails(n,floors);
  calculateCosts(n,floors);
  int index=highestCostFloor(n,floors);
displayHighestCost(index,floors);


}
void inputDetails(int n, Floor floors[n]){
 int i=0;
 for (i=0;i<n;i++){
	printf("ENTER LENGTH");
	scanf("%f",&floors[i].length);
	printf("ENTER THE WIDTH");
	scanf("%f",&floors[i].width);
	
	printf("ENTER THEW COST PER UNIT");
	scanf("%f",&floors[i].costPerUnit);
	

 }


}
void calculateCosts(int n, Floor floors[n]){
	int i=0;
	for (i=0;i<n;i++){
floors[i].area=floors[i].length*floors[i].width;

floors[i].totalCost=floors[i].area*floors[i].costPerUnit;
	}
}
int highestCostFloor(int n, Floor floors[n]){
float max;
int max_index=0;
max=floors[0].totalCost;
int i=0;
for (i=0;i<n;i++){
	if(floors[i].totalCost>max){
	max=floors[i].totalCost;
	max_index=i;
	}
}
return max_index;;
}
void displayHighestCost(int index, Floor floors[]){
	printf("THE FLOOR WITH HIGHEST COST %f \n",floors[index].totalCost);
}