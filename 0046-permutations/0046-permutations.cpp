class Solution {
public:
    void backTrack(vector<int>& nums, vector<vector<int>>& ans, int i, int n) {
        if(i==n) {
            ans.push_back(nums);
            return;
        }
        for(int j=i; j<n; j++) {
            swap(nums[j], nums[i]);
            backTrack(nums,ans,i+1,n);
            swap(nums[j], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        backTrack(nums,ans,0,n);
        return ans;
    }
};