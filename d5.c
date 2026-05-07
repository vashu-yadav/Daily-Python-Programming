#include <stdio.h>

int main() {
    int p, q;

    // Input sizes
    scanf("%d", &p);
    int a[p];

    for(int i = 0; i < p; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &q);
    int b[q];

    for(int i = 0; i < q; i++) {
        scanf("%d", &b[i]);
    }

    int result[p + q];

    int i = 0, j = 0, k = 0;

    // Merge process
    while(i < p && j < q) {
        if(a[i] < b[j]) {
            result[k++] = a[i++];
        } else {
            result[k++] = b[j++];
        }
    }

    // Remaining elements of a[]
    while(i < p) {
        result[k++] = a[i++];
    }

    // Remaining elements of b[]
    while(j < q) {
        result[k++] = b[j++];
    }

    // Print merged array
    for(int i = 0; i < p + q; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}