class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int count=n;
        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                if(nums[i] != INT_MIN && nums[i]==nums[j]) {
                    nums[j] = INT_MIN;
                    count--;
                }
            }
        }
        int insertPos = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != INT_MIN) {
                nums[insertPos++] = nums[i];
            }
        }
        while (insertPos < n) {
            nums[insertPos++] = INT_MIN;
        }

        return count;
    }
};