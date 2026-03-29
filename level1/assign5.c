/*Write a program to swap two structures.
typedef struct {
    char name[50];
    int age;
} Person;  
Function prototype:
void read_person(Person *p);
void print_person(Person *p);
void swap_person(Person *p1, Person *p2);
*/
typedef struct {
    char name[50];
    int age;
} Person;  

void read_person(Person *p);
void print_person(Person *p);
void swap_person(Person *p1, Person *p2);

int main(){
    char  p1[50];
    char p2[50];
    Person *p;
    printf("ENTER THE FIRST PERSON DETAILS");
    read_person(&p1);

printf("ENTER THE SECOND PERSON DETAILS");
    read_person(&p2);
swap_person(&p1,&p2);

    printf("AFTER SWAPPING\n");
    print_person(&p1);
    print_person(&p2);
    
}
void read_person(Person *p){
    scanf("%s",p);

}
void print_person(Person *p){
    printf(" %s",&p);

}
void swap_person(Person *p1,Person *p2){
    
}
