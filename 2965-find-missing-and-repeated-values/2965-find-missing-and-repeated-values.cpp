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
        unordered_set<int> s;

        for(int i=0; i<n; i++) {
            if(s.find(nums[i]) != s.end()) {
                repeat = nums[i];
                break;
            }
            s.insert(nums[i]);
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