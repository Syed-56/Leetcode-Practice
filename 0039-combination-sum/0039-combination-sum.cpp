class Solution {
public:
    set<vector<int>> s;
    void backTrack(vector<int> nums, int i, vector<int>& combination, vector<vector<int>>& ans, int target) {
        if(i==nums.size()) {
            return;
        }
        if(target==0) {
            if(s.find(combination) == s.end()) {
                s.insert(combination);
                ans.push_back(combination);
            }
            return;
        }
        if(target<0) {
            return;
        }

        combination.push_back(nums[i]);
        backTrack(nums,i+1,combination,ans,target-nums[i]); //include element once
        backTrack(nums,i,combination,ans,target-nums[i]);   //include elements multiple times
        combination.pop_back(); //exclude element while backtracking
        backTrack(nums,i+1,combination,ans,target); //since we dont include a number so we dont decrease our target
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> combination;
        vector<vector<int>> ans;
        backTrack(candidates,0,combination,ans,target);
        return ans;
    }
};