int findPeakElement(int* nums, int numsSize) {
    int left = 0, right = numsSize - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] > nums[mid + 1]) {
            // Peak is on left side including mid
            right = mid;
        } else {
            // Peak is on right side
            left = mid + 1;
        }
    }

    return left;   // or right, both are same here
}