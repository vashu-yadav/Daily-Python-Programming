#include <stdio.h>

int main() {

    int arr[] = {12, 45, 67, 23, 89};
    int n = 5;
    int key = 23;

    for(int i = 0; i < n; i++) {

        if(arr[i] == key) {
            printf("Element found at index %d", i);
            return 0;
        }
    }

    printf("Element not found");

    return 0;
}