#include <stdio.h>

int main() {

    int arr[] = {10,20,30,40,50,60,70};
    int n = 7;
    int key = 50;

    int low = 0;
    int high = n - 1;

    while(low <= high) {

        int mid = (low + high) / 2;

        if(arr[mid] == key) {
            printf("Found at index %d", mid);
            return 0;
        }

        else if(arr[mid] < key)
            low = mid + 1;

        else
            high = mid - 1;
    }

    printf("Not Found");

    return 0;
}