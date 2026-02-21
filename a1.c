
//create and int array and display its elements using pointer
#include<stdio.h>
void main(){
    int x=10;
    int *p=&x;
    printf("%d,%p,%p,%p", *p,p,&x,&p);
    

}