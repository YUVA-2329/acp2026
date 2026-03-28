/*
Write a modular C program to perform the following tasks using file handling functions:
i.	Read the details of n students from the user and store them in an array of structures.
ii.	Write the array of structures to a text (ASCII) file using fprintf().
iii.	Read the data back from the ASCII file into a second array using fscanf() and display it.
iv.	Display the array of structures.
Function prototype:
void inputStudents(Student students[], int n);
void writeToTextFile(Student students[], int n, const char *filename);
int readFromTextFile(Student students[], const char *filename);
void printStudents(Student students[], int n);   */