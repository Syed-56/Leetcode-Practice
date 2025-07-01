class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> arrayToReturn(nums.size(),0);
        arrayToReturn[0] = nums[0];
        for(int i=1; i<nums.size(); i++) {
            arrayToReturn[i] = arrayToReturn[i-1] + nums[i];
        }
        return arrayToReturn;
    }
};