void moveZeroes(int* nums, int numsSize) {
    int k = 0;  // position for next non-zero element

    // Step 1: Move non-zero elements forward
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] != 0) {
            nums[k++] = nums[i];
        }
    }

    // Step 2: Fill remaining with zeroes
    while(k < numsSize) {
        nums[k++] = 0;
    }
}