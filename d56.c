#include <stdlib.h>

int* maxSlidingWindow(int* nums, int numsSize, int k, int* returnSize) {
    if (numsSize == 0) {
        *returnSize = 0;
        return NULL;
    }

    int* result = (int*)malloc(sizeof(int) * (numsSize - k + 1));
    int* deque = (int*)malloc(sizeof(int) * numsSize); // stores indices

    int front = 0, rear = 0; // deque pointers
    int idx = 0;

    for (int i = 0; i < numsSize; i++) {

        // Remove indices out of window
        if (front < rear && deque[front] <= i - k)
            front++;

        // Remove smaller elements from rear
        while (front < rear && nums[deque[rear - 1]] < nums[i])
            rear--;

        // Add current index
        deque[rear++] = i;

        // Store result when window is formed
        if (i >= k - 1)
            result[idx++] = nums[deque[front]];
    }

    *returnSize = idx;
    return result;
}