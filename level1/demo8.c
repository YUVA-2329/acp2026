/*8	Write a C program to concatenate two strings using user-defined functions.
 The program should accept two strings from the user and pass them to a function that performs the concatenation.
  (strings, while/do while)
Function prototype:
void input(char *str);
void concatenate_strings(char *str1, char *str2);
void display(char *str);
*/
#include <stdio.h>
#include <string.h>
void input(char *str);
void concatenate_strings(char *str1, char *str2);
void display(char *str);
int main(){
   char str1[100] ;
   char str2[100];
   
   printf("ENTER FIRST STRING    ");
   input(str1);
   printf("ENTER SECOND STRING   ");
   input(str2);
   concatenate_strings(str1,str2);
   display(str1);
   

return 0;

}
void input(char *str){
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
}
void concatenate_strings(char *str1, char *str2){
    strcat(str1,str2);
    
}
void display(char *str){
  printf("%s ",str);

}