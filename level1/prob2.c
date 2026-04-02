/**/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* inputString();

int WinMain() {
    char **str = NULL;
    int count = 0;

    while(1) {
        printf("Enter string (type 'exit' to stop): ");

        char *temp = inputString();

        if(strcmp(temp, "exit") == 0) {
            free(temp);
            break;
        }

        str = (char**) realloc(str, (count + 1) * sizeof(char*));

        str[count] = temp;

        count++;
    }

    printf("\nStored strings:\n");
    for(int i = 0; i < count; i++) {
        printf("%s\n", str[i]);
    }

    for(int i = 0; i < count; i++) {
        free(str[i]);
    }
    free(str);

    return 0;
}