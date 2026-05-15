//create  5 employees and check which among them has the highest salary
#include<stdio.h>

struct employee {

    int id;
    char name[10];
    int salary;


};

void main(){

    int highest=0;
    int i;
    struct employee emp[5];
    for( i=0;i<5;i++){
        printf("Enter the  employee details:");
        scanf("%d %s %d",&emp[i].id,emp[i].name, &emp[i].salary);

    }

    for(i=0;i<5;i++){
        if(emp[i].salary > emp[highest].salary){
            highest = i;
        }
       
    }
    printf("Highest salary is %d",emp[highest].salary);
}