class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int start = 0, end = n-1;
        while(start <= end) {
            int mid = start + (end-start)/2;
            if(mid==0 || mid==n-1)  return nums[mid];
            if(nums[mid+1] != nums[mid] && nums[mid] != nums[mid-1])    return nums[mid];
            if(mid%2 == 0) {  //both sides have even elements
                if(nums[mid] == nums[mid+1]) {      //single element exist in right half
                    start = mid+1;
                }
                else {  //single element exist in left half
                    end = mid-1;
                }
            }
            else {  //both sides have odd elements
                if(nums[mid] == nums[mid+1]) {  //single element exist in left half
                    end = mid-1;
                }
                else {      //single element exist in right half 
                    start = mid+1;
                }
            }
        }
        return -1;
    }
};