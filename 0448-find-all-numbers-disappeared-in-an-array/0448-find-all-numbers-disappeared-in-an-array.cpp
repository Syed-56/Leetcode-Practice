class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> numSet;

        for(int i=n-1; i>=0; i--) {
            numSet.insert(nums[i]);
            nums.pop_back();
        }

        for(int i=1; i<=n; i++) {
            if(numSet.find(i) == numSet.end()) {
                nums.push_back(i);
            }
        }
        return nums;
    }
};