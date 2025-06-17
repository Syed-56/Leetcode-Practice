#include <stdio.h>
#include <stdlib.h>

int* runningSum(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* runsum = (int*)malloc(numsSize * sizeof(int));

    if (runsum == NULL) {
        return NULL;  // Handle malloc failure
    }

    runsum[0] = nums[0];
    for (int i = 1; i < numsSize; i++) {
        runsum[i] = runsum[i - 1] + nums[i];
    }

    return runsum;
}
