// use type def with structures and demonstrate its usage in a full program
#include <stdio.h>

typedef struct {
    int id;
    char name[20];
    float salary;
} Employee;

void main() {

    Employee emp1;   

    printf("Enter details for Employee 1 (id name salary): ");
    scanf("%d %s %f", &emp1.id, emp1.name, &emp1.salary);

    printf("%d %s %f", emp1.id, emp1.name, emp1.salary);

   
 
}