/*Write a program to swap two strings. 

Function prototype:

void read_string(char str[], int size);

void print_string(char str[]);

void swap_strings(char str1[], char str2[]);*/
#include <stdio.h>
#include <string.h>
void read_string(char str[], int size);

void print_string(char str[]);

void swap_strings(char str1[], char str2[]);
int main(){
   
 
   int size=100;
    char str1[size];
     char str2[size];
   printf("ENTER THE FIRST STRING  ");
   read_string(str1,size);

 printf("ENTER THE SECOND STRING  ");
   read_string(str2,size);
   printf("before swapping the frist string is  \n");
   print_string(str1);
    printf("before swapping the second string is\n");
   print_string(str2);
    
   swap_strings(str1,str2);
   //AFTER SWAPPING STRINGS
   printf("before swapping the frist string is  \n");
   print_string(str1);
    printf(" after swapping the second string is  \n");
   print_string(str2);

   

}
void read_string(char str[], int size){
    fgets(str,size,stdin);

}
void print_string(char str[]){
    printf("%s\n",str);
}
void swap_strings(char str1[],char str2[]){
    char temp[100];
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
}