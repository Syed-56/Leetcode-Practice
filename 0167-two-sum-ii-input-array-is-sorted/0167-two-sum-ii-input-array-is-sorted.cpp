class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start=0, end = numbers.size()-1;

        while(start < end) {
            int sum = numbers[start] + numbers[end];
            if(sum > target)    end--;
            else if(sum < target)   start++;
            else    return {start+1, end+1};    //bcz Q says 1-based indexing
        }
        return numbers;
    }
};