#include <stdio.h>

struct bank {
    int ac;
    float bal;
    char name[50];
};

void deposit(struct bank *s);
void withdraw(struct bank *s);

int main() {

    struct bank s;

    printf("Enter Account Number: ");
    scanf("%d", &s.ac);

    printf("Enter Account Holder Name: ");
    scanf("%s", s.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &s.bal);

    int choice;

    do {
        printf("\n1. Deposit\n2. Withdraw\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                deposit(&s);
                break;

            case 2:
                withdraw(&s);
                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

        printf("Current Balance: %.2f\n", s.bal);

    } while(choice != 3);

    return 0;
}

void deposit(struct bank *s) {
    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    s->bal += amount;
    printf("Deposit successful!\n");
}

void withdraw(struct bank *s) {
    float amount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if(amount > s->bal) {
        printf("Insufficient balance!\n");
    } else {
        s->bal -= amount;
        printf("Withdrawal successful!\n");
    }
}
