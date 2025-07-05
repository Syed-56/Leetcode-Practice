class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int count=0, pointer=0;
        for(int i=1; i<=n; i++) {
            if(nums[i] != nums[pointer]) {
                nums[count] = nums[pointer];
                count++;
                pointer=i;
            }
        }
        for(int i=count; i<n; i++) {
            nums[i] = INT_MIN;
        }
        return count;
    }
};