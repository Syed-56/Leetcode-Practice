class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int container,maxContainer=0;
        for(int i=0; i<n; i++) {
            container=0;
            for(int j=i+1; j<n; j++) {
                container = (abs(j-i)) * (min(height[j],height[i]));
                maxContainer = max(maxContainer,container);
            }
        }
        return maxContainer;
    }
};