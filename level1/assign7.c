/*
Write a C program to count how many words in a given sentence.
 Use a user-defined function to perform the counting.
  The sentence may contain multiple words separated by spaces. (strings, while/do while)
Function Prototypes:
void input(char *str);
int count_words(char *str);
void display(char *str, int count);
*/
#include <stdio.h>
#include <string.h>

void input(char *str);
int count_words(char *str);
void display(char *str, int count);
int main(){
char str[100];
printf("ENTER THE STRING TO COUNT AND DISPLAY THE THE NUMBER OF WORDS");
input(str);
int count=count_words(str);
display(str,count);
return 0;




}
void input(char *str){
    
    scanf("%s[^\n]",str);

}
int count_words(char *str){
    int i=0;
    int count=0;
    while(str[i]!='\0'){
        if ((i==0 && str[i] !=' ')||(str[i]!= ' ' && str[i-1]==' '))
         count++;
    }
    return count;
        

    }
void display(char *str ,int count){
printf("\n SENTENCE %s" , str);
printf("NUMBER OF WORDS :%d",count);
}

        
    

