#include <stdio.h>

float div(float a,float b) {
    if (b == 0) {
        printf("Undefined whendi dividing by zero)\n");
        return 0;   
    }
    return a / b;
}

int main() {
    float x,y;
    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);
    

    printf("division of aandb is %.2f", div(x,y));
    return 0;
}