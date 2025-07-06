class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> arrayToReturn;
        int product;
        for(int i=0; i<n; i++) {
            product=1;
            for(int j=0; j<n; j++) {
                if(i == j)  continue;
                product *= nums[j];
            }
            arrayToReturn.push_back(product);
        }
        return arrayToReturn;
    }
};