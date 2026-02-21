#include<stdio.h>
void main(){
    int a[10];

    int *p=a;
    printf("enter the elements of an array");

    for(int i=0;i<10;i++){
        scanf("%d",(p+i));
        
    }
    
 for(int i=0;i<10;i++){
    printf("%d\n",*(p+i));
}
for(int i=0;i<10;i++){
    printf("%p\n",&p[i]);
}
}