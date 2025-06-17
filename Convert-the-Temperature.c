/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
    double* ans = (double*)malloc(2 * sizeof(double));
    if(ans==NULL)   exit(0);
    ans[0] = celsius + 273.15;
    ans[1] = (celsius * 9/5) + 32;
    *returnSize = 2;
    return ans;
}