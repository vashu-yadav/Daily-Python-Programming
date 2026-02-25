#include<stdio.h>


int main(){
    int n;
    printf("enter the number of elements of an array: ");
    scanf("%d",&n);

    int *p;
    
    int arr[n];
    p=arr;

    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    printf("\nThe given elements of this array is:");
         for(int i=0;i<n;i++){
        printf("%d",*(p+i));
        printf("\n");

    }
    
    
    int *q;
    int arr1[n];
    q=arr1;

    for(int i=0;i<n;i++){
       *(q+i)=*(p+i);


    }
for(int i=0;i<n;i++){
    printf("\nThe copied array element is %dst: ",i+1);
    printf("%d",*(q+i));
   
}
 return 0;
}