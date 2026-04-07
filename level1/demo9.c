#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[100];
    int roll;
    int marks;
} Student;

void inputStudents(Student students[], int n);
void writeToTextFile(Student students[], int n, const char *filename);
int readFromTextFile(Student students[], const char *filename);
void printStudents(Student students[], int n);

int main() {
    int n;

    printf("ENTER THE NUMBER OF STUDENTS: ");
    scanf("%d", &n);

    Student Stu[n];
    Student Stu2[n];

    inputStudents(Stu, n);

    writeToTextFile(Stu, n, "students.txt");

    int count = readFromTextFile(Stu2, "students.txt");

    printf("\n--- ORIGINAL DATA ---\n");
    printStudents(Stu, n);

    printf("\n--- DATA READ FROM FILE ---\n");
    printStudents(Stu2, count);

    return 0;
}

void inputStudents(Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", students[i].name);  // allows spaces

        printf("Roll: ");
        scanf("%d", &students[i].roll);

        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }
}

void writeToTextFile(Student students[], int n, const char *filename) {
    FILE *fp = fopen(filename, "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        // ✅ CORRECT: use %s (NOT %[^,])
        fprintf(fp, "%s,%d,%d\n",
                students[i].name,
                students[i].roll,
                students[i].marks);
    }

    fclose(fp);
    printf("\nData written to file successfully.\n");
}

int readFromTextFile(Student students[], const char *filename) {
    FILE *fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 0;
    }

    int i = 0;

    while (fscanf(fp, " %[^,],%d,%d",
                  students[i].name,
                  &students[i].roll,
                  &students[i].marks) == 3) {
        i++;
    }

    fclose(fp);
    return i;
}

void printStudents(Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll: %d\n", students[i].roll);
        printf("Marks: %d\n", students[i].marks);
    }
}