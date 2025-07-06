class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int product=1;
        
        vector<int> prefix(n,1);
        for(int i=1; i<n; i++) {
            prefix[i] = prefix[i-1] * nums[i-1];
        }
        for(int val:prefix)  cout << val << " ";
        cout << endl;
        vector<int> postfix(n,1);
        for(int i=n-2; i>=0; i--) {
            postfix[i] = postfix[i+1] * nums[i+1];
        }
        for(int val:postfix) cout << val << " ";
        cout << endl;
        vector<int> arrayToReturn(n,1);
        for(int i=0; i<n; i++) {
            arrayToReturn[i] = prefix[i] * postfix[i];
        }
        return arrayToReturn;
    }
};