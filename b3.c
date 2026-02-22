#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, new, i;
    int *ptr;

    printf("Enter initial size: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    printf("enter the new size: ");
    scanf("%d",&new);

    ptr=(int *)realloc(ptr,new * sizeof(int));

    for(int i=n;i<new;i++){
        scanf("%d",(ptr+i));
    }

    printf("Total elements are: \n");
     for(int i=0;i<new;i++){
        printf("\n%d",*(ptr+i));
    }
}
