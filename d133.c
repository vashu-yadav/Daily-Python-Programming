int* relativeSortArray(int* arr1, int arr1Size, int* arr2, int arr2Size, int* returnSize) {
    
    int count[1001] = {0}; // since 0 <= value <= 1000
    
    // Step 1: Count frequency
    for (int i = 0; i < arr1Size; i++) {
        count[arr1[i]]++;
    }
    
    int* result = (int*)malloc(sizeof(int) * arr1Size);
    int k = 0;
    
    // Step 2: Place elements according to arr2
    for (int i = 0; i < arr2Size; i++) {
        while (count[arr2[i]] > 0) {
            result[k++] = arr2[i];
            count[arr2[i]]--;
        }
    }
    
    // Step 3: Place remaining elements in ascending order
    for (int i = 0; i <= 1000; i++) {
        while (count[i] > 0) {
            result[k++] = i;
            count[i]--;
        }
    }
    
    *returnSize = arr1Size;
    return result;
}