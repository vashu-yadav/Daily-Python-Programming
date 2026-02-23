#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *p = (int *)malloc(n * sizeof(int));

    if (p == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }
    
    int *q=p;


    for (int i = 0; i < n; i++) {
        printf("%p", *(q+i+1));
    }


    free(p);   
    return 0;
}
