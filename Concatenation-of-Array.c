/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int* newArr =  (int*)malloc((numsSize*2) * sizeof(int));
	for(int i=0; i<numsSize; i++)	newArr[i] = nums[i];
	for(int i=numsSize; i<numsSize*2; i++) {
		newArr[i] = nums[i-numsSize];
	}
    *returnSize = numsSize*2;
	return newArr;
}