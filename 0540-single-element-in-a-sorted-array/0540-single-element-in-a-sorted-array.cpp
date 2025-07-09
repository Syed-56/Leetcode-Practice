class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int count=0;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            if(nums[i] != nums[i+1]) {
                if(count==0)    return nums[i];
                else    count=0;
            }
            else {
                count++;
            }
        }
        return -1;
    }
};