/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(numsSize * sizeof(int));
    if (result == NULL) {
        *returnSize = 0;
        return NULL; // Memory allocation failed
    }

    // Square each element in the nums array
    for (int i = 0; i < numsSize; i++) {
        result[i] = nums[i] * nums[i];
    }

    // Sort the squared numbers in non-decreasing order using selection sort
    for (int i = 0; i < numsSize; i++) {
        int min = i;
        for (int j = i + 1; j < numsSize; j++) {
            if (result[j] < result[min]) {
                min = j;
            }
        }
        // Swap elements
        int temp = result[min];
        result[min] = result[i];
        result[i] = temp;
    }

    // Set returnSize to the size of the resulting array
    *returnSize = numsSize;

    return result;
}