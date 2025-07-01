class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum=INT16_MIN, sum=0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] > sum+nums[i]) sum = nums[i];
            else    sum += nums[i];
            if(sum > maxSum)    maxSum = sum;
        }
        return maxSum;
    }
};