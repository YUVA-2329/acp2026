/*Write a modular C program to perform the following tasks using file handling functions:
i.	Read the details of n students from the user and store them in an array of structures
ii.	Write the array of structures to a binary file using fwrite().
iii.	Read the binary file into a second array of structures using fread().
iv.	Display the array of structures.
Function prototype:
void inputStudents(Student students[], int n);
void writeToBinaryFile(Student students[], int n, const char *filename);
int readFromBinaryFile(Student students[], const char *filename);
void printStudents(Student students[], int n);
*/