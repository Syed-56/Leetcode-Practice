class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for(int i=0; i<n; i++) {
            if(i>0 && nums[i] == nums[i-1]) continue; // Skip duplicates for the first element
            int left = i+1, right = n-1;
            while(left < right) {
                if(nums[left] == nums[left-1] && left > i+1) {
                    left++; // Skip duplicates for the second element
                    continue;
                }
                int sum = nums[i] + nums[left] + nums[right];
                if(sum > 0) {
                    right--;
                }
                else if(sum < 0) {
                    left++;
                }
                else {
                    result.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                }
            }
        }
        return result;
    }
};