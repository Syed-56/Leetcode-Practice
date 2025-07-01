class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> arrayToReturn(nums.size(),0);
        for(int i=0; i<nums.size(); i++) {
            for(int j=0; j<=i; j++) {
                arrayToReturn.at(i) += nums.at(j);
            }
        }
        return arrayToReturn;
    }
};