#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr1=(int *)malloc(n*sizeof(int));

    int *arr2=(int *)malloc(n *sizeof(int));

 
    printf("Enter elements of first array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", arr1 + i);
    }

    for (int i = 0; i < n; i++) {
        *(arr2 + i) = *(arr1 + i);
    }

    printf("\nfirst array: ");
    for (int i=0;i< n;i++) {
        printf("%d ",*(arr1 + i));
    }

    printf("\nsecond array: ");
    for (int i=0;i< n;i++) {
        printf("%d ",*(arr2 + i));
    }

    return 0;
}
