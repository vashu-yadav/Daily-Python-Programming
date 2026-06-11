#include <stdlib.h>

int* dailyTemperatures(int* temperatures, int temperaturesSize, int* returnSize) {
    
    int* result = (int*)calloc(temperaturesSize, sizeof(int));
    int* stack = (int*)malloc(sizeof(int) * temperaturesSize); // stores indices
    int top = -1;

    for (int i = 0; i < temperaturesSize; i++) {
        
        // While current temp is higher than stack top
        while (top != -1 && temperatures[i] > temperatures[stack[top]]) {
            int idx = stack[top--];
            result[idx] = i - idx;
        }

        // Push current index
        stack[++top] = i;
    }

    *returnSize = temperaturesSize;
    return result;
}