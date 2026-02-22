#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;

    float sum=0;

    printf("Enter the no. of elemenst of an array: ");
    scanf("%d",&n);

    int *p=(int *)malloc(n * sizeof(int));

    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
        sum+=(*(p+i));
    }
    printf("average of the sum of elements of an array is: %.2f",(sum/n));
}
