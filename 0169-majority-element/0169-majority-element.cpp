class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1)    return nums[0];
        int freq=0;
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<n-1; i++) {
            if(nums[i-1] == nums[i])    freq++;
            else    freq=0;

            if(freq > n/2)  return nums[i];
        }
    }

};