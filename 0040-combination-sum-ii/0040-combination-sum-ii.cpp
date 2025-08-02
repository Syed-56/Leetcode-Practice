class Solution {
public:
    set<vector<int>> s;
    void backTrack(vector<int>& nums, int i, vector<int>& combination, vector<vector<int>>& ans, int target) {
        if(target==0) {
            vector<int> sortedComb = combination;
            sort(sortedComb.begin(), sortedComb.end());
            if(s.find(sortedComb) == s.end()) {
                s.insert(sortedComb);
                ans.push_back(sortedComb);
            }
            return;
        }
        if (target < 0 || i >= nums.size()) return;
        combination.push_back(nums[i]);
        backTrack(nums,i+1,combination,ans,target-nums[i]); //include element once
        combination.pop_back(); //exclude element while backtracking
        int next=i+1;
        while(next<nums.size() && nums[next]==nums[i]) {
            next++;
        }
        backTrack(nums,next,combination,ans,target); //since we dont include a number so we dont decrease our target
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> combination;
        vector<vector<int>> ans;
        sort(candidates.begin(), candidates.end());
        backTrack(candidates,0,combination,ans,target);
        sort(ans.begin(), ans.end());
        return ans;
    }
};