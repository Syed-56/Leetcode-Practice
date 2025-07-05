class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int& val : nums) {
            val *= val;
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};