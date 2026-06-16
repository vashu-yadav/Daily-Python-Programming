/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

// Comparator for sorting intervals by start time
int cmp(const void* a, const void* b) {
    return (*(int**)a)[0] - (*(int**)b)[0];
}

int** merge(int** intervals, int intervalsSize, int* intervalsColSize, int* returnSize, int** returnColumnSizes) {
    
    if (intervalsSize == 0) return NULL;

    // Step 1: Sort intervals
    qsort(intervals, intervalsSize, sizeof(int*), cmp);

    // Allocate result array
    int** result = (int**)malloc(intervalsSize * sizeof(int*));
    *returnColumnSizes = (int*)malloc(intervalsSize * sizeof(int));

    int idx = 0;

    // First interval
    result[idx] = (int*)malloc(2 * sizeof(int));
    result[idx][0] = intervals[0][0];
    result[idx][1] = intervals[0][1];
    (*returnColumnSizes)[idx] = 2;

    // Step 2: Merge intervals
    for (int i = 1; i < intervalsSize; i++) {
        if (intervals[i][0] <= result[idx][1]) {
            // Merge
            if (intervals[i][1] > result[idx][1]) {
                result[idx][1] = intervals[i][1];
            }
        } else {
            // New interval
            idx++;
            result[idx] = (int*)malloc(2 * sizeof(int));
            result[idx][0] = intervals[i][0];
            result[idx][1] = intervals[i][1];
            (*returnColumnSizes)[idx] = 2;
        }
    }

    *returnSize = idx + 1;
    return result;
}