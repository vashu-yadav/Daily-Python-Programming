#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int evalRPN(char** tokens, int tokensSize) {
    int stack[10000];
    int top = -1;

    for (int i = 0; i < tokensSize; i++) {
        char* token = tokens[i];

        // Check if operator
        if (strcmp(token, "+") == 0 ||
            strcmp(token, "-") == 0 ||
            strcmp(token, "*") == 0 ||
            strcmp(token, "/") == 0) {

            int b = stack[top--];
            int a = stack[top--];
            int result;

            if (strcmp(token, "+") == 0)
                result = a + b;
            else if (strcmp(token, "-") == 0)
                result = a - b;
            else if (strcmp(token, "*") == 0)
                result = a * b;
            else
                result = a / b;  // truncates toward zero

            stack[++top] = result;
        } 
        else {
            // Convert string to integer
            stack[++top] = atoi(token);
        }
    }

    return stack[top];
}