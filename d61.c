#include <stdio.h>

int main() {
    int arr[6] = {1, 3, 5, 7, 9, 11};
    int low = 0, high = 5, mid;
    int target = 7;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == target) {
            printf("Element found at index %d", mid);
            return 0;
        }

        else if(arr[mid] < target) {
            low = mid + 1;
        }

        else {
            high = mid - 1;
        }
    }

    printf("Element not found");

    return 0;
}