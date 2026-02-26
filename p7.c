#include<stdio.h>
void main(){
    int a,b;
    printf("enter the two numbers ");
    scanf("%d %d", &a, &b);
    printf("give the thype of operation you want to perform \n 1.addition \n 2.subtraction \n 3.multiplication \n 4.division \n");
    int oper;
printf("enter the operation number: ");
scanf("%d", &oper);
switch(oper){
    case 1: printf("the sum is %d", a+b);
        break;
    case 2: printf("the difference is %d", a-b);
        break;
    case 3: printf("the product is %d", a*b);
        break;
    case 4: if(b==0){
            printf("undefined\n");
        }
        else{
            printf("the division is %.2f", (float)a/b);
        }
        break;
    default:
        printf("invalid operation");
}
}