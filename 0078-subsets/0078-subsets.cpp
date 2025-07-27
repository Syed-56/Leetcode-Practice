class Solution {
public:
    void getSubsets(vector<int>& nums, vector<int> subset, vector<vector<int>> &ans, int i) {
        if(i==nums.size()) {
            ans.push_back(subset);
            return;
        }
        subset.push_back(nums[i]);
        getSubsets(nums,subset,ans,i+1);
        subset.pop_back();
        getSubsets(nums,subset,ans,i+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSubsets;
        vector<int> subset;
        getSubsets(nums,subset,allSubsets,0);
        return allSubsets;
    }
};