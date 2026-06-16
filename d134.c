#include <limits.h>
#include <math.h>
#include <stdlib.h>

int maximumGap(int* nums, int numsSize) {
    if (numsSize < 2) return 0;

    int min = INT_MAX, max = INT_MIN;

    // Step 1: find min and max
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < min) min = nums[i];
        if (nums[i] > max) max = nums[i];
    }

    if (min == max) return 0;

    // Step 2: compute bucket size
    int bucketSize = ceil((double)(max - min) / (numsSize - 1));
    int bucketCount = (max - min) / bucketSize + 1;

    int* bucketMin = (int*)malloc(bucketCount * sizeof(int));
    int* bucketMax = (int*)malloc(bucketCount * sizeof(int));
    int* used = (int*)calloc(bucketCount, sizeof(int));

    for (int i = 0; i < bucketCount; i++) {
        bucketMin[i] = INT_MAX;
        bucketMax[i] = INT_MIN;
    }

    // Step 3: fill buckets
    for (int i = 0; i < numsSize; i++) {
        int idx = (nums[i] - min) / bucketSize;

        if (!used[idx]) {
            bucketMin[idx] = nums[i];
            bucketMax[idx] = nums[i];
            used[idx] = 1;
        } else {
            if (nums[i] < bucketMin[idx]) bucketMin[idx] = nums[i];
            if (nums[i] > bucketMax[idx]) bucketMax[idx] = nums[i];
        }
    }

    // Step 4: calculate max gap
    int maxGap = 0;
    int prevMax = min;

    for (int i = 0; i < bucketCount; i++) {
        if (!used[i]) continue;

        int gap = bucketMin[i] - prevMax;
        if (gap > maxGap) maxGap = gap;

        prevMax = bucketMax[i];
    }

    free(bucketMin);
    free(bucketMax);
    free(used);

    return maxGap;
}