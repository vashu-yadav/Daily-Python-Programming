#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int x) {
    if(top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = x;
}

void pop() {
    if(top == -1) {
        printf("Stack Underflow\n");
        return;
    }
    printf("Popped: %d\n", stack[top--]);
}

int main() {
    push(10);
    push(20);
    push(30);

    pop();
    pop();

    return 0;
}