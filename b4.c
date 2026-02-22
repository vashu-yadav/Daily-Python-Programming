//Reverse an array
#include <stdio.h>
#include <stdlib.h>

void main() {
    int n;
    

    printf("Enter number of elements: ");
    scanf("%d",&n);

int *p =(int *)malloc(n *sizeof(int));

for(int i=0; i<n; i++){
    scanf("%d",(p+i));
}
int * first=p;
int *last=p +n-1;


while(first<last){
    int temp;
    temp=*first;
    *first=*last;
    *last=temp;

first++;
last--;
}
printf("reversed elements aere: ");
for(int i=0;i<n;i++){
    printf(" %d",*(p+i));
}

}