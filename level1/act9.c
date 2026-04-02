/*A startup needs a system to manage employee salaries and persist them for monthly auditing. Develop a modular C program to store employee records (ID, Name, and Basic Salary) in an array of structures. The program should write these records to a text file named payroll.txt. Subsequently, it should read the data from the file to calculate the total salary expenditure and display it. 
Function Prototypes:
•	void inputEmployees(Employee e[], int n);
•	void writeToTextFile(Employee e[], int n, const char *filename);
•	float calculateTotalPayroll(const char *filename);
•	void displayExpenditure(float total);
*/