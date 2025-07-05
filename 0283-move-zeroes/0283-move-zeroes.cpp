class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n,0);
        int pointer=0;
        for(int i=0; i<n; i++) {
            if(nums[i]!=0) {
                arr[pointer] = nums[i];
                pointer++;
            }
        }
        nums = arr;
    }
};