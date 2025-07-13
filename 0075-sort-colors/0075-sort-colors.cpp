class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeroCount=0, oneCount=0, twoCount=0;
        for(int val:nums) {
            if(val==0)  zeroCount++;
            else if(val==1)  oneCount++;
            else if(val==2)  twoCount++;
        }

        for(int i=0; i<zeroCount; i++)  nums[i] = 0;
        for(int i=zeroCount; i<zeroCount+oneCount; i++)   nums[i] = 1;
        for(int i=zeroCount+oneCount; i<nums.size(); i++)    nums[i] = 2;

    }
};