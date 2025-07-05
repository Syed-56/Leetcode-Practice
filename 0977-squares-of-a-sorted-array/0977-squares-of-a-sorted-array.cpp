class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int start = 0, end = n-1;
        vector<int> arrayToReturn(n,0);
        for(int i=0; start <= end; i++) {
            if(abs(nums[start]) < abs(nums[end])) {
                arrayToReturn[n-1-i] = nums[end]*nums[end];
                end--;
            }
            else {
                arrayToReturn[n-1-i] = nums[start]*nums[start];
                start++;
            }

        }
        return arrayToReturn;
    }
};