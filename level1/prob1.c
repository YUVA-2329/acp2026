/*strings from the user*/
//#include <string.h>
//#inlude
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sort_array(char **str,int count);

int main() {
    char **str = NULL;
    char temp[100];
    int count = 0;

    while(1) {
        printf("Enter string (type 'exit' to stop): ");
        scanf("%s", temp);

        if(strcmp(temp, "exit") == 0) {
            break;
        }

        str = (char**) realloc(str, (count + 1) * sizeof(char*));

        str[count] = (char*) malloc((strlen(temp) + 1) * sizeof(char));

        strcpy(str[count], temp);

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
    sort_array(str,count);
    printf("SORTED ARRAY \n");
    for(int i = 0; i < count; i++) {
        printf("%s\n", str[i]);
    }

    for(int i = 0; i < count; i++) {
        free(str[i]);
    }
    free(str);

    return 0;
}
void sort_array(char **str,int count){
    int i,j=0;
    for(i=0;i<count-1;i++){
        for(j=i+1;j<count;j++){
            if(strcmp(str[i],str[j])>0){
                char *temp=str[i];
                str[j]=str[j];
                str[j]=temp;
            }
        }
    }
}