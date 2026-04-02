/*Write a C program to validate a password entered by the user based on the following rules:
i.	Password must be at least 8 characters long. // Use strlen() function
ii.	It must contain at least one uppercase letter, one lowercase letter, and one digit. 
Use a user-defined function to check these conditions and return whether the password is valid. (strings, for loop)
Function Prototypes:
void input(char *str);
int is_valid(char *str);
int is_upper(char c); // Sub function of is_valid()
int is_lower(char c); // Sub function of is_valid()
int is_digit(char c); // Sub function of is_valid()
void display(char *str, int res);
*/
#include <stdio.h>
#include <stdlib.h>
void input(char *str);
int is_valid(char *str);
int is_upper(char c); // Sub function of is_valid()
int is_lower(char c); // Sub function of is_valid()
int is_digit(char c); // Sub function of is_valid()
void display(char *str, int res);
int main(){
    printf("enter the password");
    char *str;
    input(str);
   int res= is_valid(str);
    display(str,res);
}
void input(char *str){
    scanf("%[^\n]",str);
}



