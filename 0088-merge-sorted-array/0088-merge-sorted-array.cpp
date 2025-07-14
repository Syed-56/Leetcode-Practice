class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int size1 = nums1.size(), size2 = nums2.size();
        for(int i=m; i<size1; i++) {
            nums1.pop_back();
        }
        int index=0;
        for(int i=m; i<m+n; i++) {
            nums1.push_back(nums2[index]);
            index++;
        }
        sort(nums1.begin(), nums1.end());
    }
};