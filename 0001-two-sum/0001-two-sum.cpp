class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> pair;
        vector<int> ans;

        for(int i=0; i<n; i++) {
            int first = nums[i];
            int second = target - nums[i];
            if(pair.find(second) != pair.end()) {   
                ans.push_back(pair[second]);    
                ans.push_back(i);
                return ans;
            }
            pair.emplace(nums[i],i);
        }
        return ans;
    }
};
