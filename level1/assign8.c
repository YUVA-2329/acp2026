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
#include <string.h>
void input(char *str);
int is_valid(char *str);
int is_upper(char c); // Sub function of is_valid()
int is_lower(char c); // Sub function of is_valid()
int is_digit(char c); // Sub function of is_valid()
void display(char *str, int res);
int main(){
    printf("enter the password");
    char str[100];
    input(str);
   int res= is_valid(str);
    display(str,res);
}
void input(char *str){
    scanf("%[^\n]",str);
}
int is_valid(char *str){

    if(strlen(str)<8)
    return 0;
    else{
        int upper,lower,digit=0;
        for(int i=0;str[i]!='\0';i++){
            if(is_upper(str[i])) upper=1;
            if(is_lower(str[i])) lower=1;
            if(is_digit(str[i])) digit=1;

        }
        return upper 


    }
}



