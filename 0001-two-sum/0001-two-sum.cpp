class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> pair(2,0);
        int start = 0, end = nums.size()-1;
        while (start < end) {
            if((nums[start] + nums[end]) < target) {
                end--;
            }
            else if((nums[start] + nums[end]) > target) {
                start++;
            }
            else {
                pair[0] = nums[start];
                pair[1] = nums[end];
            }
        }
        return pair;
    }
};