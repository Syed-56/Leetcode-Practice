class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int insertPos=0, count;
        for(int k:nums) {
            if(k != val) {
                nums[insertPos++] = k;
            }
        }
        count = insertPos;
        for(int i=insertPos; i<nums.size(); i++)    nums[i] = val;
        return count;
    }
};