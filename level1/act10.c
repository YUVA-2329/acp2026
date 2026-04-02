/*An airline reservation system requires a high-performance method to archive flight details.
 Unlike text files, binary storage allows the system to save and retrieve complex structure data rapidly without data conversion.
  Develop a modular C program to manage flight records (Flight Number, Destination, and Ticket Price). 
  The program must input $n$ flights, save the entire array of structures to a binary file named flights.bin using block-write operations, and then read the file to find and display the flight with the highest ticket price.



•	void inputFlights(Flight f[], int n);
•	void saveToBinary(Flight f[], int n, const char *filename);
•	Flight findMostExpensive(const char *filename);
•	void displayTopFlight(Flight f);
*/