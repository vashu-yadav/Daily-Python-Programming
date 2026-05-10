//create a structures of bank account - name of bank holde name , balance,account number
//then create two functions one for withdraw and one for deposit

#include <stdio.h>

struct bank {

    int ac;
    float bal;
    char name[10];
}s;

void withdraw(struct bank *s);
void deposit(struct bank *s);

void main(){
    printf("Enter the delails:");
    scanf("%d %.2f %s",&s.ac,&s.bal,s.name);

}
