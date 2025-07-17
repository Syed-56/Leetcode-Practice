class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> nums;
        int rows = grid.size(), cols = grid[0].size();
        
        for(int i=0; i<rows; i++) {
            for(int j=0; j<cols; j++) {
                nums.push_back(grid[i][j]);
            }
        }

        int repeat, missing;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
        for(int i=0; i<n; i++) {
            if(nums[i]==nums[i+1]) {
                repeat = nums[i];
                break;
            }
        }

        int actualSum=0, gotSum = -repeat;
        for(int i=0; i<n; i++) {
            actualSum += i+1;
            gotSum += nums[i];
        }
        missing = actualSum - gotSum;

        for(int i=0; i<n; i++)  nums.pop_back();
        nums.push_back(repeat);
        nums.push_back(missing);
        return nums;
    }
};