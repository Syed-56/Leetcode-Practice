class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> pair(2, -1); // default -1 in case no solution found
        vector<int> tempNums = nums;
        sort(tempNums.begin(), tempNums.end());

        int start = 0, end = n - 1;
        int num1 = 0, num2 = 0;
        bool found = false;

        while (start < end) {
            int sum = tempNums[start] + tempNums[end];
            if (sum < target) {
                start++;
            } else if (sum > target) {
                end--;
            } else {
                num1 = tempNums[start];
                num2 = tempNums[end];
                found = true;
                break;
            }
        }

        for (int i = 0; i < n; i++) {
            if (nums[i] == num1 && pair[0] == -1)
                pair[0] = i;
            else if (nums[i] == num2 && i != pair[0]) 
                pair[1] = i;
        }

        return pair;
    }
};
