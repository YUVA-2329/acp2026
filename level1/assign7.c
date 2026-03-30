#include <stdio.h>
#include <string.h>

void input(char *str);
int count_words(char *str);
void display(char *str, int count);

int main() {
    char str[100];
    int count;

    printf("ENTER THE STRING TO COUNT WORDS: ");
    input(str);

    count = count_words(str);

    display(str, count);

    return 0;
}

// Input function
void input(char *str) {
    scanf(" %[^\n]", str);
}

// Count words
int count_words(char *str) {
    int i = 0, count = 0;

    while (str[i] != '\0') {
        if ((i == 0 && str[i] != ' ') ||
            (str[i] != ' ' && str[i - 1] == ' ')) {
            count++;
        }
        i++;   // 🔥 VERY IMPORTANT
    }

    return count;
}

// Display result
void display(char *str, int count) {
    printf("\nSentence: %s\n", str);
    printf("Number of words: %d\n", count);
}