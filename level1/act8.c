/*Write a C program to count the number of vowels and consonants in a given string using a user-defined function. 
The program should accept a string from the user and pass it to a function that performs the counting logic.
 (strings, while/do while)
Function Prototypes:
void input(char *str);
void count(char *str, int *vowels, int *consonants);
void display(char *str, int vowels, int consonants);
*/
#include <stdio.h>
#include <string.h>

void input(char *str);
void count(char *str, int *vowels, int *consonants);
void display(char *str, int vowels, int consonants);

int main() {
    char str[100];          
    int vowels = 0;
    int consonants = 0;

    printf("ENTER THE STRING: ");
    input(str);

    count(str, &vowels, &consonants);

    display(str, vowels, consonants);

    return 0;
}

void input(char *str) {
    scanf(" %[^\n]", str);   
}

void count(char *str, int *vowels, int *consonants) {
    int i = 0;

    while (str[i] != '\0') {
        char c = str[i];

        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
            (*vowels)++;   
        }
        else if ((c>='a'&&c<='z') || (c>='A'&&c<='Z')) {
            (*consonants)++;  
        }

        i++;   
    }
}

void display(char *str, int vowels, int consonants) {
    printf("\nSTRING: %s\n", str);
    printf("VOWELS: %d\n", vowels);
    printf("CONSONANTS: %d\n", consonants);
}
