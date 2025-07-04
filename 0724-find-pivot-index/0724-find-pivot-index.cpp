class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
    int totalSum=0;
    int pivotIndex;
    bool found=false;
    for(int i=0; i<n; i++) {
        totalSum += nums[i];
    }
    int rightSum=totalSum, leftSum=0;
    for(int i=0; i<n; i++) {
        rightSum -= nums[i];
        if(rightSum==leftSum) {
            pivotIndex=i;
            found=true;
            break;
        }
        leftSum += nums[i];
    }
    if(found)   return pivotIndex;
    else    return -1;
    }
};