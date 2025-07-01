class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1)    return nums[0];
        int freq=1;
        sort(nums.begin(), nums.end());
        
        for(int i=1; i<n; i++) {
            if(nums[i-1] == nums[i])    freq++;
            else    freq=1;

            if(freq > n/2)  return nums[i];
        }
        return -1;
    }
};