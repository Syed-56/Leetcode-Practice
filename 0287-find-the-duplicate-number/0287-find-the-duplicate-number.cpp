class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        do {
                slow = nums[slow];  //move 1x
                fast = nums[nums[fast]];    //move 2x
            }
        while(slow != fast);

        slow = nums[0];
        while(slow != fast) {
            slow = nums[slow];
            fast = nums[fast];  //both move at same speed
        }

        return fast;
    }
};