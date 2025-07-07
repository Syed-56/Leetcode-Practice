class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int left=0, right=n;
        vector<int> ans;
        while(ans.size() != nums.size()) {
            ans.push_back(nums[left]);
            ans.push_back(nums[right]);
            left++;
            right++;
        }
        return ans;
    }
};