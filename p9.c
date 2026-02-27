#include<stdio.h>
void main(){
    int n;
    int sum=0; //sum of n natural numbers
    printf("enter the value of n ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=i;

    }
    printf("the sum is %d",sum);
}