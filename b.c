#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *ptr;          // pointer declaration
    float sum = 0, avg;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory
    ptr = (int *)malloc(n * sizeof(int));

    // Check memory allocation
    if (ptr == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    // Insert elements using pointer
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", (ptr + i));   // pointer arithmetic
        sum += *(ptr + i);        // dereferencing pointer
    }

    // Calculate average
    avg = sum / n;

    // Display result
    printf("Average of elements = %.2f\n", avg);

    // Free memory
    free(ptr);

    return 0;
}
