/*Write a C program to compare areas of three rectangles and find the largest using functions and structure. (else-if ladder)
typedef struct {
    	char name[50];
    	float length;
    	float width;
    	float area;
} Rectangle;
Function prototype:
Rectangle input();
float calculate_area(Rectangle rect);
void compare_areas(Rectangle r1, Rectangle r2, Rectangle r3);*/
#include <stdio.h>

/* Structure Definition */
typedef struct{
    int length;
    int width;
    int area;
} Rectangle;

/* Function Prototypes */
Rectangle input();
int calculate_area(Rectangle rect);
int compare_areas(Rectangle r1, Rectangle r2, Rectangle r3);
void output(int result, Rectangle r1, Rectangle r2, Rectangle r3);

int main() {
    Rectangle r1, r2, r3;

    printf("Enter details of Rectangle 1\n");
    r1 = input();
    r1.area = calculate_area(r1);

    printf("\nEnter details of Rectangle 2\n");
    r2 = input();
    r2.area = calculate_area(r2);

    printf("\nEnter details of Rectangle 3\n");
    r3 = input();
    r3.area = calculate_area(r3);

    int result = compare_areas(r1, r2, r3);
    output(result, r1, r2, r3);

    return 0;
}

/* Function to read rectangle details */
Rectangle input() {
    Rectangle rect;

    printf("Enter length: ");
    scanf("%d", &rect.length);

    printf("Enter width: ");
    scanf("%d", &rect.width);

    return rect;
}

/* Function to calculate area */
int calculate_area(Rectangle rect) {
    return rect.length * rect.width;
}

/* Function to compare areas */
int compare_areas(Rectangle r1, Rectangle r2, Rectangle r3) {

    if (r1.area > r2.area && r1.area > r3.area)
        return 1;

    else if (r2.area > r1.area && r2.area > r3.area)
        return 2;

    else if (r3.area > r1.area && r3.area > r2.area)
        return 3;

    else if (r1.area == r2.area && r1.area > r3.area)
        return 5;

    else if (r1.area == r3.area && r1.area > r2.area)
        return 6;

    else if (r2.area == r3.area && r2.area > r1.area)
        return 7;

    else
        return 8;  // all equal
}

/* Function to display result */
void output(int result, Rectangle r1, Rectangle r2, Rectangle r3) {

    printf("\nResult:\n");

    if(result == 1)
        printf("Rectangle 1 has the largest area = %d\n", r1.area);

    else if(result == 2)
        printf("Rectangle 2 has the largest area = %d\n", r2.area);

    else if(result == 3)
        printf("Rectangle 3 has the largest area = %d\n", r3.area);

    else if(result == 5)
        printf("Rectangle 1 and Rectangle 2 have the largest equal area = %d\n", r1.area);

    else if(result == 6)
        printf("Rectangle 1 and Rectangle 3 have the largest equal area = %d\n", r1.area);

    else if(result == 7)
        printf("Rectangle 2 and Rectangle 3 have the largest equal area = %d\n", r2.area);

    else
        printf("All three rectangles have the same area = %d\n", r1.area);
}