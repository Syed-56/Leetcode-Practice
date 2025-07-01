class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1)    return nums[n-1];
        int freq;
        for(int i=0; i<n; i++) {
            freq=1;
            for(int j=i+1; j<n; j++) {
                if(nums[i]==nums[j]) {
                    freq++;
                }
            }
            if(freq > n/2)  return nums[i];
        }
        return -1;
    }
};