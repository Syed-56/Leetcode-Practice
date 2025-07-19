class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        int n = nums.size();
        vector<int> prefixSum;
        unordered_map<int, int> prefixSumMap;
        prefixSum.push_back(nums[0]);
        cout << "Prefix Sums: " << prefixSum[0] << " ";
        
        for(int i=1; i<n; i++) {
            prefixSum.push_back(prefixSum[i-1] + nums[i]);
            cout << prefixSum[i] << " ";
        }
        cout << endl;

        for(int i=0; i<n; i++) {
            if(prefixSum[i] == k)    count++;

            int target = prefixSum[i] - k;
            if(prefixSumMap.find(target) != prefixSumMap.end()) {
                count += prefixSumMap[target];
            }

            if(prefixSumMap.find(prefixSum[i]) == prefixSumMap.end()) {
                prefixSumMap[prefixSum[i]] = 0;
            }
            prefixSumMap[prefixSum[i]]++;
        }

        return count;
    }
};