class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int MaxProduct = 0;
        for(int i=0; i<n; i++) {
            int currentProduct = 1;
            for(int j=i; j<n; j++) {
                currentProduct *= nums[j];
                MaxProduct = max(currentProduct, MaxProduct);
            }
        }
        return MaxProduct;
    }
};