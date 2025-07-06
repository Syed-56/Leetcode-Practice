class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left=0, right=n-1;
        int maxContainer=0, container;
        while(left<right) {
            container=0;
            int h = min(height[left],height[right]);
            int width = right-left;
            container = width * h;
            maxContainer = max(container,maxContainer);
            if(height[right] < height[left]) right--;
            else    left++;
        }
        return maxContainer;
    }
};