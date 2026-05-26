#include<stdio.h>
void main(){
    int a,b;
    printf("enter the two numbers ");
    scanf("%d %d", &a, &b);
    a=a+b; //swapping without 3rd variable
    b=a-b;
    a=a-b;
    printf(" after swap: %d %d",a,b);
}