#include<stdio.h>

void main(){


    int a[2][2];
    int *p = &a[0][0];

    printf("Enter the elements\n");
    for(int i = 0; i < 4; i++){
        scanf("%d", p + i);
    }

    for(int i = 0; i < 4; i++){
        printf("%d %p\n", *(p + i), (p + i));
    }

}
